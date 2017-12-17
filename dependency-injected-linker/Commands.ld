/* Linker configuration for GNU/GCC LD and LLVM/clang LD. */
PROVIDE(Commands_start = LOADADDR("Commands"));
PROVIDE(Commands_end = Commands_start + SIZEOF("Commands"));
