section .text
    global _start
_start:             ;tells linker entry point
    mov rdx,len     ;message length
    mov rsi,msg     ;message to write
    mov rdi,1       ;file descriptor (stdout)
    mov rax,1       ;system call number (sys_write)
    syscall         ;call kernel
    mov rax,60      ;system call number (sys_exit)
    mov rdi,0       ;add this to output error code 0(to indicate program terminated without errors)
    syscall         ;call kernel

section .data
    msg db 'Hello, world!', 0xa  ;string to be printed
    len equ $ - msg     ;length of the string