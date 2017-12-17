#include <string.h>
#include <stdio.h>

#include "Commands.h"

#include "Humidity.h"
#include "Temperature.h"
#include "Time.h"

#define DEF_COMMAND(funcname) \
    { \
        # funcname, \
        funcname \
    } \

static struct Command commands[] = {
    DEF_COMMAND(printHumidity),
    DEF_COMMAND(printTemperature),
    DEF_COMMAND(printTime),
};

#define Commands_start commands
#define Commands_end (commands + (sizeof(commands) / sizeof(struct Command)))

void runCommand(const char *cmd)
{
    for (struct Command *c = Commands_start; c < Commands_end; c++)
        if (!strcmp(c->name, cmd)) {
            c->func();
            return;
        }
    printf("Unknown command: %s\n", cmd);
}
