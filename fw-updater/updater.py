import sys
import threading
from queue import Queue
from datetime import datetime, timedelta
import serial
import time
import crc8

PACKET_LENGTH_BYTES = 1
PACKET_DATA_BYTES = 16
PACKET_CRC_BYTES = 1
PACKET_CRC_INDEX = PACKET_LENGTH_BYTES + PACKET_DATA_BYTES
PACKET_LENGTH_BYTES = PACKET_LENGTH_BYTES + PACKET_DATA_BYTES + PACKET_CRC_BYTES


DEVICE_ID = 0x42

SYNC_SEQ = bytes([0xC4, 0x55, 0x7E, 0x10])
DEFAULT_TIMEOUT = 5000

SERAIL_PORT = "/dev/ttyACM0"
BAUDRATE = 115200

device = serial.Serial(SERAIL_PORT, BAUDRATE)

# rxBuffer = Queue()
txBuffer = Queue()
rxPackets = Queue()

stop_threads = False


def systemExit():
    global stop_threads
    stop_threads = True
    reader.join()
    writer.join()
    # creator.join()
    sys.exit(1)


def uartReader():
    while not stop_threads:
        if device.in_waiting >= PACKET_LENGTH_BYTES:
            raw = device.read(PACKET_LENGTH_BYTES)
            packet = Packet.from_bytes(raw)
            rxPackets.put_nowait(packet)
            print(packet)


def uartWriter():
    while not stop_threads:
        if txBuffer.qsize() > 0:
            # print(f"{txBuffer.get_nowait()}")
            device.write(txBuffer.get_nowait())


class PacketType:
    BL_PACKET_ACK_DATA0 = 0x15
    BL_PACKET_RETX_DATA0 = 0x19
    BL_PACKET_SYNC_OBSERVED_DATA0 = 0x20
    BL_PACKET_FW_UPDATE_REQ_DATA0 = 0x31
    BL_PACKET_FW_UPDATE_RSP_DATA0 = 0x37
    BL_PACKET_DEVICE_ID_REQ_DATA0 = 0x3C
    BL_PACKET_DEVICE_ID_RSP_DATA0 = 0x3F
    BL_PACKET_FW_LENGTH_REQ_DATA0 = 0x42
    BL_PACKET_FW_LENGTH_RSP_DATA0 = 0x45
    BL_PACKET_READY_FOR_DATA_DATA0 = 0x48
    BL_PACKET_UPDATE_SUCCESSFUL_DATA0 = 0x54
    BL_PACKET_NACK_DATA0 = 0x59


class Packet:
    length: int
    data: bytes
    crc: int

    def __init__(self, length: int, data: bytes, crc: int = None):
        self.length = length
        self.data = data

        bytesToPad = PACKET_DATA_BYTES - len(self.data)
        padding = bytes([0xFF] * bytesToPad)
        self.data += padding

        if crc == None:
            self.crc = self.computeCRC()
        else:
            self.crc = crc

    def computeCRC(self) -> int:
        hash = crc8.crc8()
        hash.update(self.length.to_bytes() + self.data)
        return int(hash.hexdigest(), 16)

    def from_bytes(data: bytes):
        length = data[0] & 0xF
        payload = data[1:-1]
        crc = data[-1]
        return Packet(length, payload, crc)

    def __bytes__(self):
        return self.length.to_bytes() + self.data + self.crc.to_bytes()

    def __str__(self):
        return f"Packet: Len [0x{self.length}] | DATA [{self.data[:self.length].hex('-')}] | CRC [0x{self.crc:02x}]"


def sendPacket(packet: Packet, isACK: bool = True):
    putToWriteBuffer(bytes(packet))
    while True and isACK:
        if rxPackets.qsize() > 0:
            ackPacket = rxPackets.get(False)
            match ackPacket.data[0]:
                case PacketType.BL_PACKET_ACK_DATA0:
                    # print(">>>ACK<<<")
                    break
                case PacketType.BL_PACKET_RETX_DATA0:
                    print("Retransmit request.")
                    putToWriteBuffer(bytes(packet))
                case PacketType.BL_PACKET_NACK_DATA0:
                    print("Something went south.")
                    systemExit()
                case _:
                    print(f"Unknown request.")
                    systemExit()


def putToWriteBuffer(data: bytes):
    txBuffer.put_nowait(data)


def waitForResponse(type: int, timeout: int = 5) -> Packet:
    now = datetime.now()
    end = now + timedelta(seconds=timeout)
    while True:
        if rxPackets.qsize() > 0:
            packet = rxPackets.get_nowait()
            if packet.data[0] == type:
                return True
        now = datetime.now()
        if now >= end:
            return False


def syncWithBootloader():
    print("Sync with bootloader...")
    while True:
        device.write(SYNC_SEQ)
        # putToWriteBuffer(SYNC_SEQ)
        if waitForResponse(PacketType.BL_PACKET_SYNC_OBSERVED_DATA0, 1):
            print("Synced.")
            break
        else:
            continue


def sendFWUpdateRequest():
    print("Sending FW Update Request...")
    packet = Packet(1, PacketType.BL_PACKET_FW_UPDATE_REQ_DATA0.to_bytes())
    sendPacket(packet)
    if waitForResponse(PacketType.BL_PACKET_FW_UPDATE_RSP_DATA0):
        print("FW Update Request accepted.")
    else:
        print("FW Update Request Error!")
        while True:
            pass


def WaitForDeviceIDReq():
    print("Waiting for Device ID request...")
    if waitForResponse(PacketType.BL_PACKET_DEVICE_ID_REQ_DATA0):
        print("Received Device ID Req.")
    else:
        print("Device ID Req Error!")
        while True:
            pass
    packet = Packet(
        2, PacketType.BL_PACKET_DEVICE_ID_RSP_DATA0.to_bytes() + DEVICE_ID.to_bytes()
    )
    print("Sending Device ID...")
    sendPacket(packet)
    if waitForResponse(PacketType.BL_PACKET_DEVICE_ID_RSP_DATA0):
        print("Successfuly sent Device ID.")
    else:
        print("Device ID RSP Error!")
        while True:
            pass


def WaitForFWLengthReq(length: int):
    print("Waiting for FW Length request...")
    if waitForResponse(PacketType.BL_PACKET_FW_LENGTH_REQ_DATA0):
        print("Received FW Length Req.")
    else:
        print("FW Length Req Error!")
        while True:
            pass
    packet = Packet(
        5,
        PacketType.BL_PACKET_FW_LENGTH_RSP_DATA0.to_bytes()
        + (length).to_bytes(4, "little"),
    )
    print("Sending FW Length...")
    sendPacket(packet)
    if waitForResponse(PacketType.BL_PACKET_FW_LENGTH_RSP_DATA0):
        print("Successfuly sent FW Length.")
    else:
        print("FW Length Error!")
        while True:
            pass


def WaitForReadyForData():
    print("Waiting for Ready for DATA...")
    if waitForResponse(PacketType.BL_PACKET_READY_FOR_DATA_DATA0):
        print("Received Ready for DATA.")
    else:
        print("Ready for DATA Error!")
        systemExit()


def SendFirmware(length: int):
    bytesWritten = 0
    while bytesWritten < length:
        WaitForReadyForData()
        dataBytes = fwImage[bytesWritten : bytesWritten + PACKET_DATA_BYTES]
        dataLength = len(dataBytes)
        dataPacket = Packet(dataLength - 1, dataBytes)
        sendPacket(dataPacket)
        bytesWritten += dataLength
        print(f"Wrote [{dataLength}] bytes ({bytesWritten / length})")


if __name__ == "__main__":
    reader = threading.Thread(target=uartReader)
    writer = threading.Thread(target=uartWriter)
    # creator = threading.Thread(target=createPacket)

    reader.start()
    writer.start()
    # creator.start()
    fwFile = open("../app/build/app.bin", "rb")
    fwImage = fwFile.read()

    syncWithBootloader()
    sendFWUpdateRequest()
    WaitForDeviceIDReq()
    WaitForFWLengthReq(len(fwImage))
    SendFirmware(len(fwImage))

    print("Update done. Exiting...")
    systemExit()
