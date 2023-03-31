section .data
    msg db 'Hello, Holberton', 0xA ; Message to be printed

section .text
    global main

main:
    mov eax, 0x1        ; System call number for write
    mov edi, 0x1        ; File descriptor for stdout
    mov rsi, msg        ; Message to be printed
    mov edx, 0x13       ; Length of the message
    syscall             ; Call the kernel to write the message to stdout

    mov eax, 0x3C       ; System call number for exit
    xor edi, edi        ; Return 0 for success
    syscall             ; Call the kernel to exit the program
