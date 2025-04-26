#include "../include/quick_sort.h"

void ordenar_quick(double arreglo[20], int primero, int ultimo) {
    int central = (primero + ultimo) / 2;
    double pivote = arreglo[central];
    int izquierda = primero;
    int derecha = ultimo;

    do {
        while (arreglo[izquierda] < pivote) izquierda++;
        while (arreglo[derecha] > pivote) derecha--;

        if (izquierda <= derecha) {
            double temp = arreglo[izquierda];
            arreglo[izquierda] = arreglo[derecha];
            arreglo[derecha] = temp;
            izquierda++;
            derecha--;
        }
    } while (izquierda <= derecha);

    if (primero < derecha)
        ordenar_quick(arreglo, primero, derecha);
    if (izquierda < ultimo)
        ordenar_quick(arreglo, izquierda, ultimo);
}
