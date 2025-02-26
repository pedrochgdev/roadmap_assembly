# 04-Calculadora

Este es el cuarto proyecto de mi **RoadMap Assembly**. Se trata de una calculadora básica en Assembly x86_64 que soporta operaciones aritméticas (`+`, `-`, `*`, `/`). En este proyecto aprendí sobre el manejo de loops, saltos condicionales, macros, manipulación de la pila (stack) y depuración con `gdb`.

## Objetivo

- Implementar una calculadora funcional en Assembly.
- Aprender a manejar loops y saltos condicionales.
- Implementar macros para simplificar operaciones repetitivas.
- Trabajar con la pila para almacenar y recuperar valores temporalmente.
- Aprender a depurar con `gdb` para analizar registros, variables y la pila.

## Herramientas y Entorno

- **Assembler:** NASM (Netwide Assembler)
- **Linker:** GNU ld (parte de GNU Binutils)
- **Debugger:** GNU gdb (GNU Debugger)
- **Sistema Operativo:** Linux (64 bits) en una máquina virtual
- **Editor de Texto:** Vim

## Aprendizajes Clave

- **Loops y Saltos Condicionales:** Utilizados para manejar la ejecución repetitiva en la calculadora.
- **Manejo de Macros:** Se implementaron macros para simplificar el código y mejorar su organización.
- **Uso de la Pila:** Aprendí que al usar `call` y `ret`, la pila almacena la dirección de retorno. Tuve que adaptar mi código para evitar sobrescribir estos valores cuando usaba la pila para almacenar resultados temporales.
- **Conversión de Caracteres a Números:** Entendí que los números ingresados como caracteres necesitan ser convertidos desde ASCII a valores numéricos antes de operar con ellos.
- **Depuración con `gdb`**:
  - `info registers`: Para ver los registros.
  - `x/16x var`: Para inspeccionar memoria en hexadecimal.
  - `x/s var`: Para ver una cadena en memoria.
  - `info stack`: Para inspeccionar la pila.
  - `bt` (backtrace): Para ver el historial de llamadas a funciones.

## Compilación y Ejecución

Para compilar y ejecutar este proyecto, abre una terminal en Linux y utiliza los siguientes comandos:

bash
nasm -f elf64 calc.asm -o calc.o
ld -o calc calc.o
./calc

Para debuggear una vez compilado el proyecto utiliza:

bash
gdb ./calc

## Contenido del Código

El archivo `calc.asm` contiene:

- **Macros para operaciones aritméticas** (`sumar`, `restar`, `multiplicar`, `dividir`).
- **Macros para input y output** (`scanInt`, `scanChar`, `println`).
- **Manejo de la pila** para almacenar valores intermedios sin interferir con las direcciones de retorno.

## Problemas y Soluciones

1. **Manejo del Input:** Al principio, no podía leer correctamente los valores ingresados, pero logré solucionarlo estructurando mejor la función de entrada.
2. **Conversión de Caracteres a Números:** Inicialmente, los números ingresados se almacenaban como caracteres ASCII. Implementé un algoritmo para convertirlos a valores numéricos y viceversa.
3. **Problema con la Pila:** Al usar `call` para funciones, la dirección de retorno se almacenaba en la pila, pero al utilizar la pila para almacenar resultados intermedios, sobrescribía estas direcciones, causando errores al intentar volver de las funciones. La solución fue ajustar el manejo de la pila y asegurarse de restaurar correctamente los valores antes de `ret`.
4. **Dificultad en Seguimiento del Código:** Debido a la complejidad del programa, tuve que empezar a usar `gdb` para inspeccionar registros, memoria y pila en tiempo de ejecución.

## Futuras Mejoras

- Optimizar el código para reducir el uso de registros y mejorar la eficiencia.
- Implementar más operaciones matemáticas y mejorar la interfaz de usuario.
- Agregar soporte para números negativos y operaciones con múltiples operandos.

¡Gracias por revisar este proyecto! Si tienes sugerencias, preguntas o deseas colaborar, no dudes en contactarme.

