#include <string.h>
#include <stdio.h>

#include "Commands.h"

void runCommand(const char *cmd)
{
    for (struct Command *c = Commands_start; c < Commands_end; c++)
        if (!strcmp(c->name, cmd)) {
            c->func();
            return;
        }
    printf("Unknown command: %s\n", cmd);
}
