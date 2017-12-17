#ifndef COMMAND_H
#define COMMAND_H

struct Command {
    const char *name;
    void (*const func)(void);
};

#endif
