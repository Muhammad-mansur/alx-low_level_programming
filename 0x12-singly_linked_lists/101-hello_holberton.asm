section .data
    hello db "Hello, Holberton",10 ; The string to print with a newline character (10)
    format db "%s",0             ; The format string for printf with a null terminator (0)

section .text
    global main
    extern printf

main:
    ; Push format string and the address of hello onto the stack
    push rdi                     ; Clear rdi to align the stack
    push rsi                     ; Clear rsi to align the stack
    lea rdi, [format]
    lea rsi, [hello]

    ; Call printf
    call printf

    ; Clean up the stack
    add rsp, 16

    ; Exit the program
    mov rax, 60                  ; syscall number for exit (60)
    xor rdi, rdi                 ; exit status: 0
    syscall

