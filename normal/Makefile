export PATH:=$(PATH):$(HOME)/.wine/drive_c/Keil_v5/ARM/ARMCC/bin/

ifeq (armcc.exe,$(CC))
CPPFLAGS:=--c99 --gnu --md --no_depend_system_headers
LDFLAGS:=\
    -L--map \
    -L--symbols \
    -L--list=main.map \
    -L--override-visibility \

else
CPPFLAGS:=-std=c11 -W -Wall -Werror -pedantic -save-temps -MMD
CFLAGS:=-O2
LDFLAGS:=\
    -Xlinker -Map=main.map \

endif

.PHONY: all
all: main

main: \
    main.o \
    Commands.o \
    Time.o \
    Humidity.o \
    Temperature.o \

.PHONY: clean
clean::
	$(RM) *.[adios] *.bc *.map main

-include $(wildcard *.d)
