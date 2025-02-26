# 02-Suma

Este proyecto consiste en un programa en Assembly que realiza la suma de dos números enteros positivos. Es el segundo proyecto en mi **RoadMap Assembly** y representa mi evolución en el aprendizaje del lenguaje Assembly, ya que originalmente se implementó utilizando números fijos sin macros. Posteriormente, una vez aprendidas las macros y el manejo de entradas, se reestructuró el proyecto para hacerlo más flexible y modular.

## Objetivo

- **Versión Inicial:** Implementar la suma de dos números fijos sin usar macros, para entender la lógica aritmética básica.
- **Versión Actual:**  
  - Integrar macros para simplificar tareas repetitivas, como el cálculo de la longitud de cadenas y la conversión entre caracteres y números.
  - Manejar la entrada del usuario para permitir sumar números proporcionados en tiempo de ejecución.
  - Aprender a utilizar la pila (stack) para preservar valores durante las operaciones.

## Herramientas y Entorno

- **Assembler:** NASM (Netwide Assembler)
- **Linker:** GNU ld (parte de GNU Binutils)
- **Debugger:** GNU gdb (GNU Debugger)
- **Sistema Operativo:** Linux (64 bits) en una máquina virtual
- **Editor de Texto:** Vim

## Aprendizajes Clave

- **Operaciones Aritméticas:**  
  Comprendí cómo realizar operaciones de suma en Assembly, utilizando instrucciones aritméticas básicas.
  
- **Uso de Macros:**  
  Inicialmente, el proyecto se realizó con números fijos. Posteriormente, incorporé macros (definidas en `macros.inc`) para:
  - Calcular la longitud de cadenas (con `countChar`).
  - Convertir cadenas a enteros (`convertirAEntero`) y viceversa (`convertirACadena`).
  - Leer inputs y manipular la pila para preservar valores.
  
- **Manejo de la Pila y Conversión de Datos:**  
  Aprendí a trabajar con la pila (stack) para guardar registros y a convertir los caracteres recibidos (en ASCII) a sus valores numéricos, ya que, por ejemplo, el carácter `'1'` se representa como 49 en ASCII.

## Compilación y Ejecución

Para compilar y ejecutar este proyecto en una terminal de Linux, utiliza los siguientes comandos (sustituyendo `suma.asm` por el nombre del archivo fuente):

bash
nasm -f elf64 suma.asm -o suma.o
ld -o suma suma.o
./suma

## Contenido del Código

El archivo suma.asm (junto con macros.inc) incluye:

- La definición de variables y la carga de operandos (ya no fijos, sino ingresados por el usuario).
- La implementación de la suma utilizando las macros para convertir entradas de caracteres a enteros, realizar la suma y luego convertir el resultado a cadena.
- El uso de la pila para preservar datos durante las conversiones y operaciones.
- Aprendizajes y Reflexiones

Este proyecto me permitió:

- Avanzar en el manejo de instrucciones aritméticas y el uso de registros en Assembly.
- Aprender a integrar macros para modularizar y simplificar el código.
- Comprender el proceso de conversión entre datos en formato ASCII y valores numéricos, lo cual es crucial cuando se trabaja con inputs.
- Familiarizarme con el uso de la pila (stack) para almacenar y recuperar valores de manera segura durante el procesamiento.

## Futuras Mejoras

- Optimizar el código para mejorar su eficiencia y manejo de errores.
- Ampliar la documentación interna del código, con más comentarios que expliquen detalladamente el funcionamiento de cada macro.
- Explorar la implementación de operaciones aritméticas adicionales y mejorar la interfaz de entrada/salida.


¡Gracias por revisar este proyecto! Si tienes sugerencias, preguntas o deseas colaborar, no dudes en contactarme.

