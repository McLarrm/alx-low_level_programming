section .data
    format db "Hello, Holberton\n",0

section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [format]
    xor eax, eax
    call printf

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
