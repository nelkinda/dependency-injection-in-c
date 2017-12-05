CPPFLAGS:=-std=c11 -W -Wall -Werror -pedantic -save-temps -MMD
CFLAGS:=-O2

.PHONY: all
all: main

main: \
    main.o \
    Commands.ld \
    Commands.o \
    Time.o \
    Humidity.o \
    Temperature.o \

.PHONY: clean
clean::
	$(RM) *.[adios] *.bc main

-include $(wildcard *.d)
