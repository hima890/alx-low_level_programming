section .data
    hello db "Hello, Holberton",10,0  ; The string to print with a newline character

section .text
    global main
    extern printf

main:
    ; Call printf
    mov rdi, hello  ; The format string
    call printf

    ; Exit the program
    mov rax, 60     ; syscall number for exit
    xor rdi, rdi    ; exit status: 0
    syscall
