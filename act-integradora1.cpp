/***************PRESENTACIÓN***************
Nombre: Diego Josuan Ornelas Durán
Fecha: 19 de Marzo de 2024
Programa: act-integradora1.cpp
Centro Universitario de Los Altos / Universidad de Guadalajara
Ingeniería en Computación / Segundo Semestre
Profesor: Sergio Franco Casillas
Descripción: Arreglo de punteros
Versión: 1.0
******************************************/
//Librerías
#include <iostream>
#include <algorithm>
using namespace std;
//Librería Externa
#include "integradora_lib.cpp"

//Definición del tamaño máximo de valores
const int tamaño_max = 50;

int main() {
    int valores[tamaño_max];  //Arreglo para almacenar los valores enteros
    int tamaño = 0; //Indice del tamaño actual del arreglo

    do {
        int valor;
        cout << "Ingresa un número. (Utiliza 0 para salir): ";

        //Mientras que lo que se ingrese no sea un valor válido, marca error
        while (!(cin >> valor)) 

            cout << "Error: Ingresa un número." << endl;
            cin.clear(); 
            cin.ignore(numeric_limits < streamsize > :: max(), '\n'); //Esta linea se utiliza para descartar cualquier valor que el usuario haya añadido y no sea válido en el programa
        

        if (valor == 0) {
            break; 
        } //Fin del if

        if (tamaño >= tamaño_max) {
            cout << "El arreglo está lleno. No se pueden insertar más valores." << endl;
            break;
        } //Fin del if

        insertar_val(valores, tamaño, valor);
    } /*Fin del do-while*/ while (true); 

    sort(valores, valores + tamaño);

    cout << "Valores ordenados:" << endl;
    for (int i = 0; i < tamaño; ++i) {
        cout << valores[i] << " ";
    } //Fin del for
    cout << endl;

    return 0;
} //Fin del main


