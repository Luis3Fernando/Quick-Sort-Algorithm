#include <iostream>
#include "../include/functions_menu.h"
using namespace std;

void mostrar_arreglo(double arreglo[20], int cantidad) {
    cout << "[ ";
    for (int i = 0; i < cantidad; i++) {
        cout << arreglo[i] << " ";
    }
    cout << "]" << endl;
}
