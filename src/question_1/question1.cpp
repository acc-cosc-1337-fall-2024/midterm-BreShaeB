#include "question1.h"

bool test_config()
{
    return true;
}

int get_hours(int seconds_since_1970)
{
    int hours = 0;
    hours = seconds_since_1970 / 3600;
    hours = hours % 24;
    return hours;
}

int get_minutes(int seconds_since_1970)
{
    int minutes = 0;
    int total = 0;
    minutes = seconds_since_1970 / 60;
    total = minutes % 60;
    return total;
}

int get_seconds(int seconds_since_1970)
{
    int seconds = 0;
    seconds = seconds_since_1970 % 3600;
    seconds = seconds % 60;
    return seconds;
}