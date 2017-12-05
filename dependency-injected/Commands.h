#ifndef COMMANDS_H
#define COMMANDS_H

#include "Command.h"

extern void runCommand(const char *cmd);

extern struct Command Commands_start[];
extern struct Command Commands_end[];

#endif
