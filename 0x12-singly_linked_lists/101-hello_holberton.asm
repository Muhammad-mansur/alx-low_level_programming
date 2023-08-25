section .data
    hello db "Hello, Holberton", 10, 0  ; The format string for printf

section .text
    global main
    extern printf

main:
    ; Set up the stack frame
    push rbp
    mov rdi, hello          ; Load the address of the format string
    call printf             ; Call printf
    pop rbp

    ; Exit the program
    mov rax, 60             ; syscall number for exit (60)
    xor rdi, rdi            ; exit status: 0
    syscall

section .bss
    resb 1                   ; Reserve 1 byte for a null terminator

