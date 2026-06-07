#include <stdlib.h>
#include "../inc/stats.h"

typedef struct stats_data
{
    float average;
    float minimal;
    float maximum;
    float sum;
    unsigned int min_ttl;
    unsigned int max_ttl;
    unsigned int sample_index;
    float samples[STATS_SAMPLES_COUNT];
} t_stats_data;

void check_min(t_stats_data *, float *);
void check_max(t_stats_data *, float *);

void *stats_init()
{
    return calloc(1, sizeof(t_stats_data));
}

void stats_feed_sample(void *stats_memory, float *sample)
{
    t_stats_data *stats_data = (t_stats_data *)stats_memory;

    stats_data->sum -= stats_data->samples[stats_data->sample_index];
    stats_data->samples[stats_data->sample_index] = *sample;
    stats_data->sum += stats_data->samples[stats_data->sample_index];

    check_min(stats_data, &stats_data->samples[stats_data->sample_index]);
    check_max(stats_data, &stats_data->samples[stats_data->sample_index]);

    stats_data->average = stats_data->sum / STATS_SAMPLES_COUNT;

    stats_data->sample_index++;
    stats_data->sample_index &= STATS_INDEX_MASK;
}

float stats_get_min(void *stats_memory)
{
    t_stats_data *stats_data = (t_stats_data *)stats_memory;
    return stats_data->minimal;
}

float stats_get_max(void *stats_memory)
{
    t_stats_data *stats_data = (t_stats_data *)stats_memory;
    return stats_data->maximum;
}

float stats_get_avg(void *stats_memory)
{
    t_stats_data *stats_data = (t_stats_data *)stats_memory;
    return stats_data->average;
}

void check_min(t_stats_data *stats, float *sample)
{
    if (*sample < stats->minimal)
    {
        stats->minimal = *sample;
        stats->min_ttl = 8;
    }
    else
    {
        if (stats->min_ttl <= 0)
        {
            stats->minimal = stats->samples[0];
            for (unsigned int i = 1; i < STATS_SAMPLES_COUNT; i++)
            {
                if (stats->samples[i] < stats->minimal)
                {
                    stats->minimal = stats->samples[i];
                    stats->min_ttl = i - stats->sample_index;
                }
            }
        }
    }
    stats->min_ttl--;
}

void check_max(t_stats_data *stats, float *sample)
{
    if (*sample > stats->maximum)
    {
        stats->maximum = *sample;
        stats->max_ttl = 8;
    }
    else
    {
        if (stats->max_ttl <= 0)
        {
            stats->maximum = stats->samples[0];
            for (unsigned int i = 1; i < STATS_SAMPLES_COUNT; i++)
            {
                if (stats->samples[i] > stats->maximum)
                {
                    stats->maximum = stats->samples[i];
                    stats->max_ttl = i - stats->sample_index;
                }
            }
        }
    }
    stats->max_ttl--;
}
