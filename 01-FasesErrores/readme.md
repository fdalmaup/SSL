# TP #1
# Fases de la Traducción y Errores
### Legajo: 156.163-7
### Facundo Dalmau Pereyra
### Objetivos:
            Identificar las fases de traducción y errores.
###  Secuencia de Pasos:
  1. Escribir hello2.c, que es una variante de hello.c
  2. Preprocesar hello2.c, no compilar, y generar hello2.i. Analizar su contenido.
  3. Escribir hello3.c, una nueva variante
  4. Investigar la semántica de la primera línea.
  5. Preprocesar hello3.c, no compilar, y generar hello3.i. Buscar diferencias entre hello3.c y hello3.i.
  6. Compilar el resultado y generar hello3.s, no ensamblar.
  7. Corregir en el nuevo archivo hello4.c y empezar de nuevo, generar hello4.s, no ensamblar.
  8. Investigar hello4.s.
  9. Ensamblar hello4.s en hello4.o, no vincular.
  10. Vincular hello4.o con la biblioteca estándar y generar el ejecutable.
  11. Corregir en hello5.c y generar el ejecutable.
  12. Ejecutar y analizar el resultado.
  13. Corregir en hello6.c y empezar de nuevo.
  14. Escribir hello7.c, una nueva variante
  15. Explicar por qué funciona

###   Análisis de resultados:
  2.EL archivo hello2.i posee el código escrito en hello2.c con la diferencia de que posee copiado todo lo que se encuentra en el header stdio.h y se reemplazó el comentario / * medio * / por un espacio, debido a que solo se realizó la etapa de preprocesamiento.
  Dentro de stdio.h se encuentran todas las declaraciones de las funciones de la biblioteca standard, así como también distintos typedef y estructuras (struct) disponibles para el uso del usuario. Este contenido se copia luego de la etapa de preprocesamiento ya que se indica por medio de la directiva #include.

  4.La primera línea indica, semánticamente, la declaración de la función printf, la cual recibe como parámetros por lo menos un puntero a char y tres puntos (...), que indican que puede recibir más parámetros además del nombrado recién; el valor de retorno es de tipo int. El primer parámetro posee la palabra const antes de char * , lo cual quiere decir que el valor del parámetro es constante e indica al compilador que evite que se modifique dentro de la definición de la función.

  5.La única diferencia encontrada entre hello3.c y hello3.i es que ya no hay una línea en blanco entre la primer y la tercer línea, es decir, la tercer línea de hello3.c pasó a ser la segunda en hello3.i.

  6.Al intentar generar el archivo hello3.s se produce un Warning que indica que la función utilizada en main, prontf, está siendo declarada implícitamente. También se produce un error que dice "expected declaration or statement at end of input", por lo que da a entender que falta la llave que cierra el main ( } ) y por lo tanto no se puede realizar la compilación para generar el archivo hello3.s.

  8.El archivo hello4.s contiene el programa perteneciente a hello4.c pero en código Assembler, por lo que se ha realizado ya el proceso de compilación. El archivo está hecho especialmente para la computadora donde se compila el programa, es decir, no es portable para computadoras que posean otro hardware o sistema operativo.

  12.Al generar el ejecutable a partir de hello5.c, se genera un warning que indica que el formato '%d' espera un argumento int. Aún así, se genera el ejecutable hello. Al ejecutar, lo que aparece por pantalla es: La respuesta es 130478408. Ejecutando de nuevo el número que aparece varía. Por lo tanto, se puede asumir que cuando se ejecuta el programa, al no encontrar el argumento int requerido por la función printf, se reemplaza por un valor que depende de la definición de la misma. Es un comportamiento no definido dado que varía en cada ejecución del programa. Se trata de un error pragmático.

  13.Al realizar la traducción completa de hello6.c (Preprocesador, Compilador, Ensamblador, Vinculador) no se presenta ninguna noticia, por lo que es una buena noticia, ya que quiere decir que no hubo ni errores ni warnings. Al ejecutar el programa hello por pantalla se ve: La respuesta es 42.

  15.El programa funciona, a pesar de la declaración implícita de printf (la cual se detecta en tiempo de compilación ya que es una restricción del lenguaje C), debido a que no está prohibido, es algo que forma parte de la estandarización de C y antes de la misma era algo aceptado.
  Indicando la declaración de la función, la cual incluye la descripción de los argumentos de la función, le da una información extra al compilador que permite que se detecten más fácil los errores causados por argumentos que no coinciden. Por lo tanto, cuando no se encuentra la declaración explícita de la función, se genera un warning.
