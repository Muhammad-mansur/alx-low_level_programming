section .data
    hello db "Hello, Holberton", 10, 0

section .text
    global main

main:
    mov rax, 1                  ; syscall number for sys_write
    mov rdi, 1                  ; file descriptor 1 (stdout)
    lea rsi, [hello]            ; address of the hello message
    mov rdx, 17                 ; message length
    syscall                     ; invoke syscall to write message

    mov rax, 60                 ; syscall number for sys_exit
    xor rdi, rdi                ; exit status: 0
    syscall                     ; invoke syscall to exit

