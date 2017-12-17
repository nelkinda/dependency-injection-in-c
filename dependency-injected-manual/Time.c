#include <stdio.h>
#include <time.h>
#include "Time.h"

#include "Command.h"

void printTime(void)
{
    time_t timer = time(NULL);
    struct tm *time;
    time = localtime(&timer);

    char timeString[9];
    strftime(timeString, 9, "%T", time);

    printf("Time: %s\n", timeString);
}
