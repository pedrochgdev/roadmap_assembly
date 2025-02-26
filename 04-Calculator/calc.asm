%include "./macro.inc"
section .data
	operaciones db ' + - * / = ', 0
	titulo db 'CALCULADORA', 0
	saltoLinea db 0xa
section .bss 
	resultado resb 16
	operador resb 1
	operando resb 16
section .text
	global _start
_start:
	println titulo
	scanInt resultado
	pop rbx
	call _calculadora
_calculadora:
	push rbx
	println operaciones
	scanChar operador
	mov dl, [operador]
	cmp dl, 61
	je _resultado
	scanInt operando
	operar operando, resultado, operador
	jmp _calculadora
_resultado:
	println resultado
	return 0
