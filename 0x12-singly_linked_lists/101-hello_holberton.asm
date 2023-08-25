section .data
    format db "Hello, Holberton",10,0  ; The format string for printf

section .text
    global main
    extern printf

main:
    sub rsp, 8                ; Align the stack to a multiple of 16 bytes

    lea rdi, [format]         ; Load the address of the format string
    call printf               ; Call printf

    add rsp, 8                ; Restore the stack

    mov rax, 60               ; syscall number for exit (60)
    xor rdi, rdi              ; exit status: 0
    syscall                   ; Invoke syscall to exit

