section .data
    hello db "Hello, Holberton",10,0  ; The format string for printf

section .text
    global main
    extern printf

main:
    push rbp                   ; Save the base pointer
    mov rdi, hello             ; Load the address of the format string into rdi
    call printf                ; Call printf
    pop rbp                    ; Restore the base pointer

    ; Exit the program
    mov rax, 60                ; syscall number for exit (60)
    xor rdi, rdi               ; exit status: 0
    syscall                    ; Invoke syscall to exit

