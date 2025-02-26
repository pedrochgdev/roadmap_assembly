%include "./macros.inc"
section .data
	msg db 'El resultado de la suma es: ', 0
	lnjmp db 0xa
section .bss
	num1 resb 16
	num2 resb 16
	suma resb 16
section .text
	global _start
_start:
	getInput num1
	getInput num2
	printInput msg
	sumarEnteros num1, num2, suma
	printInput rbx
	printInput lnjmp
	exit
	
