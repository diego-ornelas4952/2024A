/***************PRESENTACIÓN***************
Nombre: Diego Josuan Ornelas Durán
Fecha: 08 de Marzo de 2024
Programa: act_progra10.cpp
Centro Universitario de Los Altos / Universidad de Guadalajara
Ingeniería en Computación / Segundo Semestre
Profesor: Sergio Franco Casillas
Descripción: Calculadora de matrices cuadradas
Versión: 1.0
******************************************/
//Librerías
#include <iostream>
#include <ctime>
using namespace std;
#include "act-progra10lib.cpp"

int main() {
    int tamaño;
    char continuar;

    do {
        cout << "Ingrese el tamaño de las matrices (entre 2 y 15): ";
        cin >> tamaño;

        if (tamaño < 2 || tamaño > 15) {
            cout << "Tamaño de matriz no válido." << endl;
            return 1;
        }

        int matrizA[15][15], matrizB[15][15], resultado[15][15];

        cout << "Llenado de la matriz A:" << endl;
        cout << "1. Ingrese manualmente" << endl;
        cout << "2. Llenar con valores aleatorios" << endl;
        int op;
        cout << "Seleccione una opción: ";
        cin >> op;

        switch (op) {
            case 1:
                num_user(matrizA, tamaño);
                break;
            case 2:
                num_rand(matrizA, tamaño);
                break;
            default:
                cout << "Opción no válida." << endl;
        }

        cout << "Llenado de la matriz B:" << endl;
        cout << "1. Ingrese manualmente" << endl;
        cout << "2. Llenar con valores aleatorios" << endl;
        cout << "Seleccione una opción: ";
        cin >> op;

        switch (op) {
            case 1:
                num_user(matrizB, tamaño);
                break;
            case 2:
                num_rand(matrizB, tamaño);
                break;
            default:
                cout << "Opción no válida." << endl;
        }

        cout << "Matriz A:" << endl;
        imp_Matriz(matrizA, tamaño);

        cout << "Matriz B:" << endl;
        imp_Matriz(matrizB, tamaño);

        cout << "Operaciones disponibles:" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicación" << endl;
        cout << "4. Añadir más valores a una matriz" << endl;
        cout << "5. Borrar una matriz" << endl;
        cout << "Seleccione una operación: ";
        cin >> op;

        switch (op) {
            case 1:
                suma_Matriz(matrizA, matrizB, resultado, tamaño);
                cout << "Resultado de la suma:" << endl;
                imp_Matriz(resultado, tamaño);
                break;
            case 2:
                resta_Matriz(matrizA, matrizB, resultado, tamaño);
                cout << "Resultado de la resta:" << endl;
                imp_Matriz(resultado, tamaño);
                break;
            case 3:
                multi_Matriz(matrizA, matrizB, resultado, tamaño);
                cout << "Resultado de la multiplicación:" << endl;
                imp_Matriz(resultado, tamaño);
                break;
            case 4:
                cout << "Seleccione la matriz a la que desea añadir valores (A/B): ";
                char op_matriz;
                cin >> op_matriz;
                if (op_matriz == 'A' || op_matriz == 'a') {
                    plus_Numeros(matrizA, tamaño);
                    cout << "Matriz A actualizada:" << endl;
                    imp_Matriz(matrizA, tamaño);
                } else if (op_matriz == 'B' || op_matriz == 'b') {
                    plus_Numeros(matrizB, tamaño);
                    cout << "Matriz B actualizada:" << endl;
                    imp_Matriz(matrizB, tamaño);
                } else {
                    cout << "Opción no válida." << endl;
                }
                break;
            case 5:
                cout << "Seleccione la matriz que desea borrar (A/B): ";
                cin >> op_matriz;
                if (op_matriz == 'A' || op_matriz == 'a') {
                    borrar_Matriz(matrizA, tamaño);
                    cout << "Matriz A borrada correctamente." << endl;
                } else if (op_matriz == 'B' || op_matriz == 'b') {
                    borrar_Matriz(matrizB, tamaño);
                    cout << "Matriz B borrada correctamente." << endl;
                } else {
                    cout << "Opción no válida." << endl;
                }
                break;
            case 6: 
                dividir_Matriz(matrizA, matrizB, resultado, tamaño);
                cout << "Resultado de la división:" << endl;
                imp_Matriz(resultado, tamaño);
                break;
            default:
                cout << "Operación no válida." << endl;
            }
        cout << "¿Desea realizar otra operación? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    return 0;
}
