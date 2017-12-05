#include <string.h>
#include <stdio.h>

#include "Commands.h"

#include "Temperature.h"
#include "Humidity.h"
#include "Time.h"

void runCommand(const char *cmd)
{
    if (!strcmp("printTemperature", cmd))
        printTemperature();
    else if (!strcmp("printHumidity", cmd))
        printHumidity();
    else if (!strcmp("printTime", cmd))
        printTime();
    else
        printf("Unknown command: %s\n", cmd);
}
