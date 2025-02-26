;Hola Mundo
section .data
	msg db 'Hola Mundo', 0xa
	len equ $ -msg
section .text
	global _start
_start:
	mov rax, 1	;tipo de syscall (sys write en este caso)
	mov rdi, 1	;describe el archivo, si es a consola...
	mov rsi, msg	;variable a imprimir
	mov rdx, len	;cantidad de bytes a imprimir
	syscall		;es como llamar a la funcion
	;ahora salimos del programa
	mov rax, 60	;codigo de cierre de syscall
	xor rdi, rdi	;comparacion la direccion rdi para que el valor sea 0 es mas eficiente que mov rdi, 0
	syscall		;ahora llamamos para cerrar
