;compile:
;   nasm -f elf64 sys_write.asm -o sys_write.o

BITS 64

global my_write

section .text
    my_write:

        ;If count == 0, return 0
        cmp rdx, 0
        je ret_0

        ;If fd == stdin , return error   
        cmp rdi, 0
        jl ret_error

        ;If buf == NULL, return error
        cmp rsi, 0
        je ret_error

        ;sys_write
        mov rax, 1
        ;rdi == fd
        ;rsi == buf
        ;rdx == count
        syscall

        ;return count
        mov rax, rdx
        ret

    ret_0:
        ;Return 0
        mov rax, 0
        ret

    ret_error:
        ;Return -1
        mov rax, -1
        ret
