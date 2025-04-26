#include <iostream>
using namespace std;

//Función QuickSort
void Quick_Sort(double Arreglo[20],int primero,int ultimo){
    int central,izquierda,derecha;
    int pivote;
    
    //Asigancion valores
    central=(primero+ultimo)/2;
    pivote=Arreglo[central];
    izquierda=primero;
    derecha=ultimo;

    //Bucle
    do {

    while(Arreglo[izquierda]<pivote) {izquierda++;}
    while(Arreglo[derecha]>pivote) {derecha--;}

    if(izquierda<=derecha){
    
    double temp;
    temp=Arreglo[izquierda];
    Arreglo[izquierda]=Arreglo[derecha]; 
    Arreglo[derecha]=temp;
    izquierda++;
    derecha--;

    }
    }while(izquierda<=derecha);

    //Recursividad

    //lado izquierdo
    if(primero<derecha)
    Quick_Sort(Arreglo,primero,derecha); 

    //lado derecho
    if(izquierda<ultimo)
    Quick_Sort(Arreglo,izquierda,ultimo); 
}

void Arreglo_Ordenado(double A[20], int n){ 
    //Mostrar arreglo ordenado
    cout<<"Mostrando Arreglo Ordenado"<<endl;
    cout<<"[ "; 
    for (int i=0;i<n; i++){
        cout<<A[i]<<" "; 
    }
    cout<<"]";
}

main() { 
    int i,numero_elementos;
    double Arreglo[20];

    //Agregando elementos al arreglo
    cout<<"Cuantos elementos desea registrar en el arreglo: "; cin>>numero_elementos;
    cout<<"Registre los datos respectivos para cada subindice"<<endl;
    for(int i=0; i<numero_elementos; i++){
        cout<<"Digite el valor para A=["<<i+1<<"] : "; cin>>Arreglo[i];
    }


    //Mostrar elementos del arreglos
    cout<<"Mostrando Arreglo Original"<<endl;
    cout<<"[ "; 
    for (int i=0;i<numero_elementos; i++){
        cout<<Arreglo[i]<<" "; 
    }
    cout<<"]"<<endl;

    cout<<endl;
    Quick_Sort(Arreglo,0,numero_elementos-1);
    Arreglo_Ordenado(Arreglo,numero_elementos);

}