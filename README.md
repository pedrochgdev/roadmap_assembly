# RoadMap Assembly 

Bienvenido a **RoadMap Assembly**, un repositorio que documenta mi evolución en la programación en Assembly. Aquí se reúnen varios proyectos que reflejan mi aprendizaje progresivo, desde el clásico "Hola Mundo" hasta una calculadora completa y funcional. Cada etapa me permitió comprender en profundidad el lenguaje Assembly, su relación con el lenguaje de máquina y los desafíos de programar a tan bajo nivel en una arquitectura de 64 bits sobre Linux.

## Contenido del Repositorio

El repositorio se organiza en carpetas numeradas que representan cada etapa de mi aprendizaje:

1. **01-HolaMundo**  
   - **Descripción:** El típico programa "Hola Mundo", mi primer código en Assembly.  
   - **Objetivo:** Familiarizarme con la sintaxis básica y el flujo de un programa en Assembly.

2. **02-Suma**  
   - **Descripción:** Un ejercicio sencillo que suma dos números enteros positivos.  
   - **Objetivo:** Aprender a realizar operaciones aritméticas básicas y el manejo de datos.

3. **03-Input**  
   - **Descripción:** Un proyecto que recibe, guarda y muestra la entrada del usuario.  
   - **Objetivo:** Entender la interacción con el sistema y la gestión de entrada/salida a nivel bajo.

4. **04-Calculadora**  
   - **Descripción:** Una calculadora completa que integra todos los conceptos aprendidos.  
   - **Objetivo:** Demostrar la capacidad de crear un programa complejo y funcional en Assembly.  
   - **Nota:** Este proyecto es un hito importante en mi evolución, aunque representa solo una etapa en mi camino en Assembly, con planes de seguir avanzando y desarrollando proyectos aún más sofisticados.

## Propósito

El objetivo de este repositorio es evidenciar mi progreso en la programación en Assembly. A lo largo de estos proyectos he enfrentado desafíos técnicos significativos y he aprendido a trabajar a un nivel muy cercano al hardware, lo que me ha permitido adquirir una base sólida en programación de bajo nivel.

## Tecnologías y Herramientas

- **Lenguaje Assembly:** Programado con NASM (Netwide Assembler)
- **Linker:** GNU ld
- **Debugger:** GNU gdb
- **Sistema Operativo:** Linux (64 bits) en una máquina virtual
- **Editor de Texto:** Vim (actualmente aprendiendo y perfeccionando mis habilidades)

## Compilación y Ejecución

Para compilar y ejecutar cualquiera de estos proyectos, abre una terminal en Linux, navega a la carpeta correspondiente y utiliza los siguientes comandos (sustituyendo programa.asm por el archivo fuente de cada proyecto):

bash
nasm -f elf64 programa.asm -o programa.o
ld -o programa programa.o
./programa

## Documentación y Aprendizajes

Cada subproyecto incluye un README específico con instrucciones detalladas para compilar y ejecutar el código, así como una breve descripción de los desafíos enfrentados y las lecciones aprendidas. En este repositorio principal se ofrece una visión general del proceso evolutivo que he seguido, mostrando tanto mis inicios como el desarrollo de soluciones complejas en Assembly.

## Futuras Mejoras

Ampliar la documentación técnica y los comentarios en el código.
Incluir capturas de pantalla o ejemplos de salida.
Continuar desarrollando proyectos en Assembly y explorar técnicas avanzadas de optimización y depuración.


¡Gracias por visitar mi repositorio! Si tienes sugerencias, preguntas o deseas colaborar, no dudes en contactarme. 
