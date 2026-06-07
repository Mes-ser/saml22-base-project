#ifndef INC_STATS_H
#define INC_STATS_H

#define STATS_SAMPLES_COUNT (8)
#if (STATS_SAMPLES_COUNT & (STATS_SAMPLES_COUNT - 1)) != 0
#error "Samples count must be power of 2"
#endif

#define STATS_INDEX_MASK (STATS_SAMPLES_COUNT - 1)

void *stats_init();
void stats_feed_sample(void *stats_memory, float *);

float stats_get_min(void *stats_memory);
float stats_get_max(void *stats_memory);
float stats_get_avg(void *stats_memory);

#endif
