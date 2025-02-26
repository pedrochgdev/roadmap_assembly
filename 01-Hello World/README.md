# 01-HolaMundo

Este es el primer proyecto de mi **RoadMap Assembly**. Se trata de un programa básico en Assembly que imprime "Hola Mundo" en la salida estándar. Este proyecto fue mi primer paso en el mundo de la programación a tan bajo nivel, permitiéndome familiarizarme con la sintaxis y el flujo básico de un programa en Assembly, además de comprender el uso de las syscalls en Linux.

## Objetivo

- Familiarizarme con la sintaxis y el flujo de un programa en Assembly.
- Entender cómo se comunican los programas en Assembly con el sistema operativo a través de syscalls.
- Aprender a utilizar instrucciones específicas como `len $ equ msg` para calcular el tamaño de una variable (mensaje) en memoria.
- Sentar las bases para proyectos más complejos en Assembly.

## Herramientas y Entorno

- **Assembler:** NASM (Netwide Assembler)
- **Linker:** GNU ld (parte de GNU Binutils)
- **Debugger:** GNU gdb (GNU Debugger)
- **Sistema Operativo:** Linux (64 bits) en una máquina virtual
- **Editor de Texto:** Vim

## Aprendizajes Clave

- **Syscalls en Linux:**  
  Aprendí a utilizar las syscalls para interactuar con el sistema operativo. Para una referencia completa sobre las syscalls de 64 bits y sus argumentos, recomiendo visitar [x64.syscall.sh](https://x64.syscall.sh/).

- **Cálculo del tamaño de variables:**  
  Utilicé la instrucción `len $ equ msg` para determinar el tamaño del mensaje en memoria, una técnica esencial para manejar cadenas y buffers en Assembly.

## Compilación y Ejecución

Para compilar y ejecutar este proyecto, abre una terminal en Linux y utiliza los siguientes comandos:

bash
nasm -f elf64 hola_mundo.asm -o hola_mundo.o
ld -o hola_mundo hola_mundo.o
./hola_mundo

## Contenido del Código

El archivo hola_mundo.asm contiene:

- La definición de la cadena "Hola Mundo" en la sección de datos.
- La configuración de la sección de código, donde se hacen las llamadas a syscalls para escribir en la salida estándar.
- La utilización de la instrucción len $ equ msg para calcular el tamaño del mensaje.
- Aprendizajes y Reflexiones

Este proyecto me permitió:

- Dar mis primeros pasos en Assembly y comprender su sintaxis.
- Aprender a interactuar directamente con el sistema operativo mediante syscalls.
- Familiarizarme con técnicas de manejo de datos a muy bajo nivel, fundamentales para la programación en Assembly.

## Futuras Mejoras

- Optimizar el código para una ejecución más eficiente.
- Ampliar la documentación y agregar más comentarios explicativos en el código.
- Explorar y aplicar técnicas avanzadas en la manipulación de cadenas y en el uso de syscalls.


¡Gracias por revisar este proyecto! Si tienes sugerencias, preguntas o deseas colaborar, no dudes en contactarme.
