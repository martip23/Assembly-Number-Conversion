# Makefile to build project library
LIBNAME =   numbers

# source files
FILES   = $(wildcard *.asm)

# generated files
OBJS    = $(FILES:.asm=.o)

# tools we use here
AS      = nasm
AR      = ar
RM      = rm -f

AFLAGS  = -f elf64

# header files live here
INCDIR  = ../include

# targets follow ---------------------------------
all:    lib$(LIBNAME).a

clean:
		$(RM) $(OBJS) lib$(LIBNAME).a

lib$(LIBNAME).a:    $(OBJS)
		$(AR) -rcs $@ $^

# implicit rules follow -----------------
%.o:    %.asm
		$(AS) $(AFLAGS) $< -o $@

