section .data
    format db "Hello, Holberton",10,0  ; The format string for printf

section .text
    global main
    extern printf

main:
    ; Push format string onto the stack
    push rdi                     ; Clear rdi to align the stack
    lea rdi, [format]

    ; Call printf
    call printf

    ; Clean up the stack
    add rsp, 8

    ; Exit the program
    mov rax, 60                  ; syscall number for exit (60)
    xor rdi, rdi                 ; exit status: 0
    syscall

