%macro println 1
countChar %1
%%print:
	mov rax, 1
	mov rdi, 1
	pop rsi
	mov rdx, rbx
	syscall
	mov rax, 1
	mov rdi, 1
	mov rsi, saltoLinea
	mov rdx, 1
	syscall
%endmacro

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

%macro return 1
	mov rax, 60
	mov rdi, %1
	syscall
%endmacro

%macro scanInt 1
	mov rax, 0
	mov rdi, 0
	mov rsi, %1
	mov rdx, 16
	syscall
%%convertir:
	mov rax, %1
	xor rbx, rbx
	mov r10, 10
%%loopInt:
	xor rcx, rcx
	mov cl, [rax]
	cmp cl, 0xa
	je %%endLoop
	sub cl, '0'
	inc rax
	imul rbx, r10
	add rbx, rcx
	jmp %%loopInt
%%endLoop:
	push rbx
%endmacro

%macro scanChar 1
	mov rax, 0
	mov rdi, 0
	mov rsi, %1
	mov rdx, 1
	syscall
%endmacro

%macro operar 3
	mov rax, 0
	mov rbx, 0
	pop rbx
	pop rax
	mov dl, [%3]
	cmp dl, 43
	je %%sumar
	cmp dl, 45
	je %%restar
	cmp dl, 42
	je %%multiplicar
	cmp dl, 47
	je %%dividir
%%sumar:
	add rax, rbx
	call %%fin
%%restar:
	sub rax, rbx
	call %%fin
%%multiplicar:
	imul rax, rbx
	call %%fin
%%dividir:
	xor rdx, rdx
	idiv rbx
	call %%fin
%%fin:
	push rax
	countDigits 
	mov rbx, %2
	pop rcx
	pop rax
	add rbx, rcx
	mov byte [rbx], 0
	dec rbx
	push rax
%%stringLoop:
	xor rdx, rdx
	div r10
	add dl, '0'
	mov [rbx], rdx
	dec rbx
	test rax, rax
	jnz %%stringLoop
	pop rbx
%endmacro

%macro countDigits 0
	xor rcx, rcx
%%loopCount:
	xor rdx, rdx
	test rax, rax
	jz %%terminar
	div r10
	inc rcx
	jnz %%loopCount
%%terminar:
	push rcx
%endmacro
