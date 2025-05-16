# Tarea número 2

## Descripción de lo realizado:
En esta tarea se hace uso de las librerias tradicionales como <stdio.h> , <stdlib.h> y <time.h> para facilitar la creación de un arreglo de números aleatorios de una 
con la función "rand", lo primordial en esta tarea es la necesidad de utilizar la función de memoria dinámica "malloc" para reservar este espacio de memoria ya que hasta
el momento en que el usuario añade el tamaño del array se sabe el espacio que este necesitará.  
Posteriormente una vez de solicitar el tamaño del array al usuario y generar el arreglo de números aleatorio, se le pregunta al usuario cuál método de ordenamiento
desea utilizar, "Buble sort" ó "Selection Sort" o si ambos, estos métodos aplicados mediante funciones tipo void antes del main y únicamente requieren como argumento
los arrays  y su tamaño.  
Finalmente para analizar el rendimiento de ambos métodos se agrega un contador dentro de sus bucles que recorren el arreglo hasta alcanzar ordenar correctamente sus elementos
para poder identificar cuántas iteraciones son necesarias en cada método antes de lograr ordenarlos, y se observa como el método de Bubble Sort es el que más veces necesita 
recorrer el arreglo por lo tanto es el menos eficiente ya que en cada pasada va moviendo el elemento más grande encontrado hacia el final,
mientras que el método Selection Sort por cada iteración los ordena uno por uno al lado izquierdo haciendo uso del elemento mínimo e intercambiandolo en cada pasada.
