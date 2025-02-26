# 03-UserInput

Este proyecto es un ejemplo en Assembly que demuestra cómo recibir una entrada del usuario, procesarla y luego mostrarla en pantalla. El programa solicita al usuario que ingrese su nombre, y posteriormente lo saluda imprimiendo "Hola, " seguido del nombre ingresado. Este proyecto fue desarrollado en NASM y se ejecuta en Linux de 64 bits.

## Objetivo

- **Capturar la entrada del usuario:** Aprender a utilizar la syscall para leer datos desde el teclado y almacenarlos en memoria.
- **Imprimir mensajes y la entrada recibida:** Utilizar syscalls para escribir mensajes en la salida estándar.
- **Uso de macros y la pila (stack):** Implementar macros para contar caracteres (utilizando la pila para preservar datos) y para gestionar la salida del programa.

## Herramientas y Entorno

- **Assembler:** NASM (Netwide Assembler)
- **Linker:** GNU ld (parte de GNU Binutils)
- **Debugger:** GNU gdb (GNU Debugger)
- **Sistema Operativo:** Linux (64 bits)
- **Editor de Texto:** Vim (u otro de tu preferencia)

## Descripción del Código

El programa se compone de tres secciones principales:

- **.data:**  
  Define dos mensajes:
  - `msg1`: "Ingresa nombre: "
  - `msg2`: "Hola, "

- **.bss:**  
  Reserva 16 bytes para la variable `name`, que almacenará la entrada del usuario.

- **.text:**  
  Contiene el punto de entrada `_start` y varias rutinas:
  - `_printmsg1`: Imprime el mensaje "Ingresa nombre: " utilizando la macro `countChar` para calcular la longitud de la cadena.
  - `_getName`: Utiliza la syscall de lectura para almacenar la entrada del usuario en la variable `name`.
  - `_printmsg2`: Imprime el mensaje "Hola, ".
  - `_printname`: Imprime el nombre ingresado por el usuario.
  - `exit`: Macro que finaliza la ejecución del programa.

Además, en el código se definen macros personalizadas en el mismo archivo (o en un archivo separado, si así se organizó el proyecto) para:
- **countChar:** Calcula la longitud de una cadena usando la pila para preservar el valor inicial y contar caracteres hasta encontrar el terminador nulo.
- **exit:** Realiza una syscall para terminar el programa.

## Compilación y Ejecución

Para compilar y ejecutar este proyecto en Linux (64 bits), sigue estos pasos en la terminal:

(Asegúrate de usar el nombre correcto del archivo; por ejemplo, si el archivo se llama input.asm).

1. **Compilar el código fuente con NASM:**

   bash
   nasm -f elf64 input.asm -o input.o

2. **Enlazar el archivo objeto con ld:**

   bash
   ld -o input input.o

3. **Ejecutar el programa:**

   bash
   ./input

## Aprendizajes y Reflexiones

Este proyecto me permitió:

- Comprender y aplicar syscalls en Linux para la entrada y salida de datos.
- Profundizar en el manejo de la pila (stack) en Assembly, especialmente en la implementación de macros como countChar.
- Integrar la lectura de entrada del usuario y el manejo de cadenas para construir programas interactivos en Assembly.

## Futuras Mejoras
- Ampliar la validación de la entrada para manejar errores o entradas inesperadas.
- Agregar comentarios más detallados en el código para explicar paso a paso el funcionamiento de cada macro y rutina.
- Explorar técnicas avanzadas para el manejo de cadenas y operaciones de conversión entre diferentes formatos de datos.


¡Gracias por revisar este proyecto! Si tienes sugerencias, preguntas o deseas colaborar, no dudes en contactarme.

