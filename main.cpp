#include <iostream>
#include "include/quick_sort.h"
#include "include/functions_menu.h"
using namespace std;

int main() {
    int cantidad;
    double arreglo[20];

    cout << "Cuantos elementos desea registrar en el arreglo? ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        cout << "Digite el valor para A[" << i + 1 << "]: ";
        cin >> arreglo[i];
    }

    cout << "\nMostrando Arreglo Original" << endl;
    mostrar_arreglo(arreglo, cantidad);

    ordenar_quick(arreglo, 0, cantidad - 1);

    cout << "\nMostrando Arreglo Ordenado" << endl;
    mostrar_arreglo(arreglo, cantidad);

    return 0;
}