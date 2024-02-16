/***************PRESENTACIÓN***************
Nombre: Diego Josuan Ornelas Durán
Fecha: 13 de Febrero de 2024
Programa: act_progra5.cpp
Centro Universitario de Los Altos / Universidad de Guadalajara
Ingeniería en Computación / Segundo Semestre
Profesor: Sergio Franco Casillas
Descripción: Almacenar números del usuario en arreglos
Versión: 1.0
******************************************/
#include <iostream>
using namespace std;
const int array_size = 10;
int main() {
    int user_numbers[array_size] = {0};
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
                if (size < array_size) {
                    cout << "Ingrese el valor: ";
                    cin >> user_numbers[size];
                    size++;
                } else {
                    cout << "El arreglo está lleno.\n";
                }
                break;
            }
            case '2': {
                cout << "Lista de valores:\n";
                for (int i = 0; i < size; ++i) {
                    cout << user_numbers[i] << " ";
                }
                cout << endl;
                break;
            }
            case '3': {
                int sum = 0;
                for (int i = 0; i < size; ++i) {
                    sum += user_numbers[i];
                }
                cout << "Suma de todos los elementos: " << sum << endl;
                break;
            }
            case '4': {
                int indice, valor;
                cout << "Ingrese el índice (0-9) del elemento a editar: ";
                cin >> indice;
                if (indice >= 0 && indice < size) {
                    cout << "Ingrese el nuevo valor: ";
                    cin >> valor;
                    user_numbers[indice] = valor;
                } else {
                    cout << "Índice fuera de rango. Ingrese un rango válido: \n";
                }
                break;
            }
            case '5': {
                int indice;
                cout << "Ingrese el índice (0-9) del elemento a borrar: ";
                cin >> indice;
                if (indice >= 0 && indice < size) {
                    for (int i = indice; i < size - 1; ++i) {
                        user_numbers[i] = user_numbers[i + 1];
                    }
                    size--;
                } else {
                    cout << "Índice fuera de rango. Ingrese un rango válido: \n";
                }
                break;
            }
            case '6': {
                size = 0;
                cout << "Arreglo vaciado :)\n";
                break;
            }
            case '7': {
                cout << "Saliendo del programa...\n";
                break;
            }
            default: {
                cout << "Opción inválida. Por favor, seleccione una opción válida.\n";
            }
        }
    } while (option != '7');

    return 0;
}

