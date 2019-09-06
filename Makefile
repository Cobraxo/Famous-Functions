.SILENT:
.PHONY: main
.DEFAULT_GOAL: main

FLAGS = -Wall -Wextra -Werror -O3 -fPIC
CFILES = $(wildcard *.c)
CHEADER = my_lib.h
ASM = sys_write.asm
OFILE = sys_write.o

main: $(CHEADER) $(CFILES) $(ASM)
	echo "Compiling.."
	nasm -f elf64 $(ASM) -o $(OFILE)
	gcc $(FLAGS) -include $(CHEADER) $(CFILES) $(OFILE) -o $@
	echo "Finish !"
