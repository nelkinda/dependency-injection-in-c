#include <stddef.h>

#include "Commands.h"

int main(__attribute__((unused)) int argc, char *argv[])
{
    while (*++argv != NULL)
        runCommand(*argv);
    return 0;
}
