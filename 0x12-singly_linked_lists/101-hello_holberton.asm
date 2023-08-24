section .data
    hello db "Hello, Holberton",10,0  ; The string to print with a newline character (10)

section .text
    global main
    extern printf

main:
    ; Push the address of the format string onto the stack
    push rdi
    lea rdi, [hello]

    ; Call printf
    call printf

    ; Clean up the stack
    add rsp, 8

    ; Exit the program
    mov rax, 60                  ; syscall number for exit (60)
    xor rdi, rdi                 ; exit status: 0
    syscall

