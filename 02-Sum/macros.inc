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
%macro getInput 1
	mov rax, 0
	mov rdi, 0
	mov rsi, %1
	mov rdx, 16
	syscall
%endmacro
%macro printInput 1
	countChar %1
	mov rax, 1
	mov rdi, 1
	pop rsi
	mov rdx, rbx
	syscall
%endmacro
%macro convertirAEntero 1
	mov rax, %1
	push rax
	xor rbx, rbx
%%intLoop:
	xor rcx, rcx
	mov cl, [rax]
	cmp cl, 0xa
	je %%fin
	sub cl, '0'
	inc rax
	imul rbx, 10
	add rbx, rcx
	jmp %%intLoop
%%fin:
	pop rax
	push rbx
%endmacro
%macro convertirACadena 1
	mov rbx, %1+15
	mov byte [rbx], 0
	dec rbx
	mov cl, 10
%%charLoop:
	xor rdx, rdx
	div rcx
	add rdx, '0'
	mov [rbx], dl
	dec rbx
	test rax, rax
	jnz %%charLoop
	add rbx, 1
%endmacro
%macro sumarEnteros 3
	convertirAEntero %1
	convertirAEntero %2
	xor rax, rax
	pop rbx
	add rax, rbx
	pop rbx
	add rax, rbx
	convertirACadena %3
%endmacro
%macro exit 0
        mov rax, 60
        xor rdi, rdi
        syscall
%endmacro
