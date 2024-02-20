/***************PRESENTACIÓN***************
Nombre: Diego Josuan Ornelas Durán
Fecha: 20 de Febrero de 2024
Programa: act_progra6.cpp
Centro Universitario de Los Altos / Universidad de Guadalajara
Ingeniería en Computación / Segundo Semestre
Profesor: Sergio Franco Casillas
Descripción: Almacenar números del usuario en arreglos (vector)
Versión: 1.0
******************************************/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> user_numbers;
    int size = 0;
    char option;

    do {
        cout << "Seleccione una opción:\n";
        cout << "1. Ingresar un valor.\n";
        cout << "2. Mostrar lista de valores.\n";
        cout << "3. Mostrar sumatoria de todos los elementos.\n";
        cout << "4. Editar un elemento.\n";
        cout << "5. Borrar un elemento.\n";
        cout << "6. Vaciar arreglo.\n";
        cout << "7. Salir.\n";
        cout << "Ingrese su opción: ";
        cin >> option;

        switch (option) {
            case '1': {
                cout << "Ingrese el valor: ";
                int valor;
                cin >> valor;
                user_numbers.push_back(valor);
                size++;
                break;
            }//fin del case1
            case '2': {
                cout << "Lista de valores:\n";
                for (int i = 0; i < size; ++i) {
                    cout << user_numbers[i] << " ";
                }//fin del for
                cout << endl;
                break;
            }//fin del case2
            case '3': {
                int suma = 0;
                for (int i = 0; i < size; ++i) {
                    suma += user_numbers[i];
                }//fin del ciclo for
                cout << "Suma de todos los elementos: " << suma << endl;
                break;
            }//fin del case3
            case '4': {
                int indice, valor;
                cout << "Ingrese el índice (0-" << size - 1 << ") del elemento a editar: ";
                cin >> indice;
                if (indice >= 0 && indice < size) {
                    cout << "Ingrese el nuevo valor: ";
                    cin >> valor;
                    user_numbers[indice] = valor;
                }//fin del if
                else {
                    cout << "Índice fuera de rango. Ingrese un rango válido: \n";
                }//fin del else
                break;
            }//fin del case4
            case '5': {
                int indice;
                cout << "Ingrese el índice (0-" << size - 1 << ") del elemento a borrar: ";
                cin >> indice;
                if (indice >= 0 && indice < size) {
                    user_numbers.erase(user_numbers.begin()+indice);
                    size--;
                }//fin del if
                else {
                    cout << "Índice fuera de rango. Ingrese un rango válido: \n";
                }//fin del case5
                break;
            }
            case '6': {
                user_numbers.clear();
                size = 0;
                cout << "Arreglo vaciado :)\n";
                break;
            }//fin del case6
            case '7': {
                cout << "Saliendo del programa...\n";
                break;
            }//fin del case7
            default: {
                cout << "Opción inválida. Por favor, seleccione una opción válida.\n";
                break;
            }//fin del default
        }//fin del switch
    } while (option != '7'); //fin del do-while

    return 0;
}//fin del main
