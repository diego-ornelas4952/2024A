/***************PRESENTACIÓN***************
Nombre: Diego Josuan Ornelas Durán
Fecha: 20 de Febrero de 2024
Programa: act_progra7.cpp
Centro Universitario de Los Altos / Universidad de Guadalajara
Ingeniería en Computación / Segundo Semestre
Profesor: Sergio Franco Casillas
Descripción: Calculadora de matrices cuadradas
Versión: 1.0
******************************************/
#include <iostream>
#include <ctime>

using namespace std;

// Función para números aleatorios
void RandomNumbers(int user_numbers[][10], int size) {
    srand(time(0));
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            user_numbers[i][j] = rand() % 201 - 100;
        }
    }
}

// Función para valores manuales
void ManualNumbers(int user_numbers[][10], int size) {
    cout << "Ingrese los valores de la matriz:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << "Ingrese el valor para la posición [" << i << "][" << j << "]: ";
            cin >> user_numbers[i][j];
        }
    }
}

// Función para imprimir una matriz
void printMatriz(int user_numbers[][10], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << user_numbers[i][j] << " ";
        }
        cout << endl;
    }
}

// Función para añadir valores
void addNumbers(int user_numbers[][10], int size) {
    int fila, columna, valor;
    char respuesta;
    do {
        cout << "Ingrese la fila donde desea añadir el valor: ";
        cin >> fila;
        cout << "Ingrese la columna donde desea añadir el valor: ";
        cin >> columna;
        cout << "Ingrese el valor: ";
        cin >> valor;

        if (fila >= 0 && fila < size && columna >= 0 && columna < size) {
            user_numbers[fila][columna] = valor;
            cout << "Valor añadido correctamente." << endl;
        } else {
            cout << "Posición fuera de rango." << endl;
        }

        cout << "¿Desea añadir otro valor? (s/n): ";
        cin >> respuesta;
    } while (respuesta == 's' || respuesta == 'S');
}

// Función para borrar una matriz
void DeleteMatriz(int user_numbers[][10], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            user_numbers[i][j] = 0;
        }
    }
    cout << "Matriz borrada correctamente." << endl;
}

// Función para sumar dos matrices
void sumaMatriz(int matrizA[][10], int matrizB[][10], int resultado[][10], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

// Función para restar dos matrices
void restaMatriz(int matrizA[][10], int matrizB[][10], int resultado[][10], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            resultado[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
}

// Función para multiplicar dos matrices
void multiMatriz(int matrizA[][10], int matrizB[][10], int resultado[][10], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            resultado[i][j] = 0;
            for (int k = 0; k < size; ++k) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

// Función principal
int main() {
    int size;
    char continuar;

    do {
        cout << "Ingrese el tamaño de las matrices (entre 2 y 10): ";
        cin >> size;

        if (size < 2 || size > 10) {
            cout << "Tamaño de matriz no válido." << endl;
        }

        int matrizA[10][10], matrizB[10][10], resultado[10][10];

        cout << "Llenado de la matriz A:" << endl;
        cout << "1. Ingrese manualmente" << endl;
        cout << "2. Llenar con valores aleatorios" << endl;
        int option;
        cout << "Seleccione una opción: ";
        cin >> option;

        switch (option) {
            case 1:
                ManualNumbers(matrizA, size);
                break;
            case 2:
                RandomNumbers(matrizA, size);
                break;
            default:
                cout << "Opción no válida." << endl;
        }

        cout << "Llenado de la matriz B:" << endl;
        cout << "1. Ingrese manualmente" << endl;
        cout << "2. Llenar con valores aleatorios" << endl;
        cout << "Seleccione una opción: ";
        cin >> option;

        switch (option) {
            case 1:
                ManualNumbers(matrizB, size);
                break;
            case 2:
                RandomNumbers(matrizB, size);
                break;
            default:
                cout << "Opción no válida." << endl;
        }

        cout << "Matriz A:" << endl;
        printMatriz(matrizA, size);

        cout << "Matriz B:" << endl;
        printMatriz(matrizB, size);

        cout << "Operaciones disponibles:" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicación" << endl;
        cout << "4. Añadir más valores a una matriz" << endl;
        cout << "5. Borrar una matriz" << endl;
        cout << "Seleccione una operación: ";
        cin >> option;

        switch (option) {
            case 1:
                sumaMatriz(matrizA, matrizB, resultado, size);
                cout << "Resultado de la suma:" << endl;
                printMatriz(resultado, size);
                break;
            case 2:
                restaMatriz(matrizA, matrizB, resultado, size);
                cout << "Resultado de la resta:" << endl;
                printMatriz(resultado, size);
                break;
            case 3:
                multiMatriz(matrizA, matrizB, resultado, size);
                cout << "Resultado de la multiplicación:" << endl;
                printMatriz(resultado, size);
                break;
            case 4:
                cout << "Seleccione la matriz a la que desea añadir valores (A/B): ";
                char optionMatriz;
                cin >> optionMatriz;
                if (optionMatriz == 'A' || optionMatriz == 'a') {
                    addNumbers(matrizA, size);
                    cout << "Matriz A actualizada:" << endl;
                    printMatriz(matrizA, size);
                } else if (optionMatriz == 'B' || optionMatriz == 'b') {
                    addNumbers(matrizB, size);
                    cout << "Matriz B actualizada:" << endl;
                    printMatriz(matrizB, size);
                } else {
                    cout << "Opción no válida." << endl;
                }
                break;
            case 5:
                cout << "Seleccione la matriz que desea borrar (A/B): ";
                cin >> optionMatriz;
                if (optionMatriz == 'A' || optionMatriz == 'a') {
                    DeleteMatriz(matrizA, size);
                    cout << "Matriz A borrada correctamente." << endl;
                } else if (optionMatriz == 'B' || optionMatriz == 'b') {
                    DeleteMatriz(matrizB, size);
                    cout << "Matriz B borrada correctamente." << endl;
                } else {
                    cout << "Opción no válida." << endl;
                }
                break;
            default:
                cout << "Operación no válida." << endl;
        }

        cout << "¿Desea realizar otra operación? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    return 0;
}
