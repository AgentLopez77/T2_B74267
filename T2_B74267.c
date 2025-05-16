#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Tipo Bubble Sort
void Bubble_Sort(int arreglo[], int tama){
    int i;
    int j;
    int actual;
    int iteraciones = 0;

    //Se recorre el arreglo comparando el valor actual con los de a la par para comprobar si el orden es correcto
    for (i = 0; i < tama - 1; i++){
        for (j = 0; j < tama - 1 - i; j++){
            if (arreglo[j] > arreglo[j + 1]){
                // en el caso que el futuro sea menor que el pasado se intercambian los valores
                actual = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = actual;
                iteraciones += 1;
            }
        }
    }
    printf("Cantidad de iteraciones hasta lograr ordenarlos: %d\n", iteraciones);
}


//Tipo Selection Sort

void Selection_Sort( int arreglo[], int tama){
    int i;
    int j;
    int actual;
    int minimo;
    int iteraciones = 0;

    for ( i = 0; i < tama - 1; i++){
        minimo = i;
        for (j = i + 1; j < tama; j++){
            if (arreglo[j] < arreglo[minimo]){
                minimo = j;
                iteraciones += 1;

            }
        }

        //se reemplaza el primero no verificado por el mínimo 
        actual = arreglo[i];
        arreglo[i] = arreglo[minimo];
        arreglo[minimo] = actual;
        iteraciones += 1;
    }
    printf("Cantidad de iteraciones hasta lograr ordenarlos: %d\n", iteraciones);
}




int main(){
    int longitud;
    int *array;
    int contador;

    //Obtengo el valor de la longitud dado por el usuario

    printf("Ingrese el tamaño del Array: ");
    scanf("%d", &longitud);

    printf("Tamaño del arreglo: %d \n", longitud);

    //Me aseguro que el valor sea positivo y no cero

    if (longitud <= 0){
        printf("El valor debe ser postivo y distinto de cero \n");
        return 1;

    }

    //Memoria dinámica para el arreglo (ya que no sabemos el tamaño del arreglo a ingresar)
    array = (int *)malloc(longitud * sizeof(int));

    //Se está seguro que el espacio asignado está disponible
    if (array == NULL){
        printf("Asignación de memoria no exitosa \n");
        return 1;
    }

    //Se utiliza srand y NULL en la librería time para generar los números aleatorios ENTRE 0 Y 100
    printf("-----------------------------------------------------------------------------------\n");
    printf("El array con números aleatorios y sin ordenar es: [");
    for (contador = 0; contador < longitud; contador++){
        array[contador] = rand() % 100;
        printf("%d", array[contador]);
        if (contador < longitud - 1){
            printf(", ");
        }
    }

    printf("]\n");
    int metodo;

    printf("\n Selecciones cual algoritmo de ordenamiento desea utilizar: \n");

    printf("1) Bubble Sort \n");
    printf("2) Selection Sort \n");
    printf("3) Ambos \n");

    scanf("%d", &metodo);

    //Aquí se ordena dependiendo del método elegido usando case

    switch (metodo){
        case 1:
            Bubble_Sort(array, longitud);
            printf("Array ordenado con Buble Sort: ");
            printf("[");
            for (int i = 0; i < longitud; i++){
                printf("%d", array[i]);
                if (i < longitud - 1){
                printf(", ");
                }
            }
            printf("]");
            break;

        case 2:
            Selection_Sort(array, longitud);
            printf("Array ordenado con Selection Sort: ");
            
            printf("[");
            for (int i = 0; i < longitud; i++){
                printf("%d", array[i]);
                if (i < longitud - 1){
                printf(", ");
                }
            }
            printf("]");
            break;

        case 3:
            Bubble_Sort(array, longitud);
            printf("Array ordenado con Buble Sort: ");

            printf("[");
            for (int i = 0; i < longitud; i++){
                printf("%d", array[i]);
                if (i < longitud - 1){
                printf(", ");
                }
            }
            printf("]");

            printf("\n-----------------------------------------------------------------------------------\n");

            Selection_Sort(array, longitud);
            printf("Array ordenado con Selection Sort: ");

            printf("[");
            for (int i = 0; i < longitud; i++){
                printf("%d", array[i]);
                if (i < longitud - 1){
                printf(", ");
                }
            }
            printf("]");
            break;
            

        
        default:
        printf("El número ingresado no es válido");
        free(array);
        return 1;
    }

    //Libero la memoria reservada para el array
    free(array);
    array = NULL;

    return 0;

}