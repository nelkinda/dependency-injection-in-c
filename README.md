# Example for dependency injection in C

It uses the linker to perform dependency injection.

## Tested Toolchains

- GCC
- clang
- Keil/ARM armcc

### Notes on Keil/ARM armcc

I have not yet found a solution that works with a steer file that works
- without putting armcc-specific code in the source files
- and without linker option `--override-visibility`

## Building

To build on your default compiler, which should be `gcc`, `clang`, or `cc` compatible with `gcc` or `clang`: run `make`.

To explicitely build on GCC, run `make CC=gcc`.

To explicitely build on clang, run `make CC=clang`.

To explicitely build on armcc, run `make CC=armcc.exe`.

Building is only tested on Linux.
It will most likely also work on BSD and Mac OS.
Your milage on Windows may vary, get a real OS!
