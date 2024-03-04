/***************PRESENTACIÓN***************
Nombre: Diego Josuan Ornelas Durán
Fecha: 04 de Marzo de 2024
Programa: act_progra9.cpp
Centro Universitario de Los Altos / Universidad de Guadalajara
Ingeniería en Computación / Segundo Semestre
Profesor: Sergio Franco Casillas
Descripción: Realizar operaciones de conjuntos
Versión: 1.0
******************************************/
#include "iostream"
#include "vector"
using namespace std;
#include "act-progra9lib.cpp"

int main() {
    int num_universo, elemento;
    vector<int> conjunto1, conjunto2, universo;
    char op;

    cout << "Hola! Ingresa el tamaño del universo para continuar: ";
    cin >> num_universo;
    cout << "Ingresa los elementos del universo: " << endl;
    for (int i = 0; i < num_universo; ++i) {
        cin >> elemento;
        universo.push_back(elemento);
    }
    
    do {
        menu();
        cin >> op;

        switch (op) {
            case '1':
                plusElem(conjunto1);
                break;
            case '2':
                plusElem(conjunto2);
                break;
            case '3':
                borrarElem(conjunto1);
                break;
            case '4':
                borrarElem(conjunto2);
                break;
            case '5':
                limpiarConj(conjunto1);
                break;
            case '6':
                limpiarConj(conjunto2);
                break;
            case '7':
                cout << "Conjunto 1: ";
                mostrarConjuntos(conjunto1);
                cout << "Conjunto 2: ";
                mostrarConjuntos(conjunto2);
                break;
            case '8':
                cout << "Unión de conjuntos: ";
                mostrarConjuntos(unionConj(conjunto1, conjunto2));
                break;
            case '9':
                cout << "Intersección de conjuntos: ";
                mostrarConjuntos(interConj(conjunto1, conjunto2));
                break;
            case '10':
                cout << "Diferencia de conjuntos: ";
                mostrarConjuntos(restaConj(conjunto1, conjunto2));
                break;
            case '11':
                cout << "Complemento del Conjunto 1: ";
                mostrarConjuntos(complConj(conjunto1, universo));
                break;
            case '12':
                cout << "Complemento del Conjunto 2: ";
                mostrarConjuntos(complConj(conjunto2, universo));
                break;
            case '0':
                cout << "Saliendo del programa... ";
            default:
                cout << "Seleccione una opción válida. ";
        }/* switch */
    }/* do-while */ while (op != '0');
    return 0;
}//main