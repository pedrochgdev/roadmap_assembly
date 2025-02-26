section .data
	msg1 db 'Ingresa nombre: ', 0
	msg2 db 'Hola, ', 0
section .bss
	name resb 16
section .text
	global _start

%macro countChar 1
	mov rax, %1
	push rax
	xor rbx, rbx
%%countLoop:
	inc rax
	inc rbx
	mov cl, [rax]
	cmp cl, 0
	jne %%countLoop	
%endmacro
%macro exit 0
	mov rax, 60
	xor rdi, rdi
	syscall
%endmacro
_start:
	call _printmsg1
	call _getName
	call _printmsg2
	call _printname
	exit
_printmsg1:
	countChar msg1
	mov rax, 1
	mov rdi, 1
	pop rsi
	mov rdx, rbx
	syscall
	ret
_printmsg2:
	countChar msg2
	mov rax, 1
	mov rdi, 1
	pop rsi
	mov rdx, rbx
	syscall
	ret
_printname:
	countChar name
	mov rax, 1
	mov rdi, 1
	pop rsi
	mov rdx, rbx
	syscall
	ret
_getName:
	mov rax, 0
	mov rdi, 0
	mov rsi, name
	mov rdx, 16
	syscall
	ret
