#ifndef COMMAND_H
#define COMMAND_H

struct Command {
    const char *name;
    void (*const func)(void);
};

#define DEF_COMMAND(funcname) \
    static \
    const struct Command \
    __attribute__((used)) \
    __attribute__((section("Commands"))) \
    funcname ## _command = { \
        # funcname, \
        funcname \
    }; \

#endif
