/***************PRESENTACIÓN***************
Nombre: Diego Josuan Ornelas Durán
Fecha: 20 de Febrero de 2024
Programa: act_progra8.cpp
Centro Universitario de Los Altos / Universidad de Guadalajara
Ingeniería en Computación / Segundo Semestre
Profesor: Sergio Franco Casillas
Descripción: Realizar operaciones de conjuntos
Versión: 1.0
******************************************/
#include <iostream>
#include <set>
#include <vector>
using namespace std;

// Función para imprimir el conjunto
template <typename T>
void printVector(const vector<T>& vec) {
    cout << "{ ";
    for (const auto& item : vec) {
        cout << item << " ";
    }
    cout << "}" << endl;
}

// Función para añadir un elemento
template <typename T>
void addItem(vector<T>& set) {
    T item;
    cout << "Ingrese el elemento que desea insertar: ";
    cin >> item;
    set.push_back(item);
}

// Función para borrar un elemento
template <typename T>
void deleteItem(vector<T>& set) {
    if (!set.empty()) {
        T item;
        cout << "Ingrese el elemento que desea borrar: ";
        cin >> item;
        auto iterator = find(set.begin(), set.end(), item);
        if (iterator != set.end()) {
            set.erase(iterator);
            cout << "El elemento se borró correctamente. " << endl;
        } else {
            cout << "El elemento ingresado no se ha encontrado en el conjunto. Inténtelo de nuevo. " <<endl;
        }
    } else {
        cout << "El conjunto está vacío. Inténtelo de nuevo. " << endl;
    }
}

// Función para calcular la diferencia
template <typename T>
vector<T> difference(const vector<T>& set1, const vector<T>& set2) {
    vector<T> resultado;
    for (const auto& item : set1) {
        if (find(set2.begin(), set2.end(), item) == set2.end()) {
            resultado.push_back(item);
        }
    }
    return resultado;
}

// Función para vaciar el conjunto
template <typename T>
void emptyVector(vector<T>& set) {
    set.clear();
    cout << "El conjunto se vació correctamente. " << endl;
}

// Función de unión
template <typename T>
vector<T> unionVector(const vector<T>& set1, const vector<T>& set2) {
    vector<T> resultado = set1;
    for (const auto& item : set2) {
        if (find(resultado.begin(), resultado.end(), item) == resultado.end()) {
            resultado.push_back(item);
        }
    }
    return resultado;
}

// Función de intersección
template <typename T>
vector<T> intersectionVector(const vector<T>& set1, const vector<T>& set2) {
    vector<T> resultado;
    for (const auto& item : set1) {
        if (find(set2.begin(), set2.end(), item) != set2.end()) {
            resultado.push_back(item);
        }
    }
    return resultado;
}

// Función para calcular el complemento
template <typename T>
vector<T> complementVector(const vector<T>& set, const vector<T>& universe) {
    vector<T> resultado;
    for (const auto& item : universe) {
        if (find(set.begin(), set.end(), item) == set.end()) {
            resultado.push_back(item);
        }
    }
    return resultado;
}

int main() {
    int num_universe, item;
    vector<int> set1, set2, universe;
    char option;

    cout << "Ingrese el tamaño del universo: ";
    cin >> num_universe;
    cout << "Ingrese los elementos del universo: " << endl;
    for (int i = 0; i < num_universe; ++i) {
        cin >> item;
        universe.push_back(item);
    }

    do {
        cout << "\n*** Operaciones de Conjuntos ***" << endl;
        cout << "1. Insertar elemento en el Conjunto 1" << endl;
        cout << "2. Insertar elemento en el Conjunto 2" << endl;
        cout << "3. Borrar elemento en el Conjunto 1" << endl;
        cout << "4. Borrar elemento en el Conjunto 2" << endl;
        cout << "5. Vaciar el Conjunto 1" << endl;
        cout << "6. Vaciar el Conjunto 2" << endl;
        cout << "7. Mostrar los conjuntos" << endl;
        cout << "8. Unión de conjuntos" << endl;
        cout << "9. Intersección de conjuntos" << endl;
        cout << "10. Diferencia de conjuntos" << endl;
        cout << "11. Complemento del Conjunto 1" << endl;
        cout << "12. Complemento del Conjunto 2" << endl;
        cout << "0. Salir del programa" << endl;
        cin >> option;

        switch (option) {
            case '1':
                addItem(set1);
                break;
            case '2':
                addItem(set2);
                break;
            case '3':
                deleteItem(set1);
                break;
            case '4':
                deleteItem(set2);
                break;
            case '5':
                emptyVector(set1);
                break;
            case '6':
                emptyVector(set2);
                break;
            case '7':
                cout << "Conjunto 1: ";
                printVector(set1);
                cout << "Conjunto 2: ";
                printVector(set2);
                break;
            case '8':
                cout << "Unión de conjuntos: ";
                printVector(unionVector(set1, set2));
                break;
            case '9':
                cout << "Intersección de conjuntos: ";
                printVector(intersectionVector(set1, set2));
                break;
            case '10':
                cout << "Diferencia de conjuntos: ";
                printVector(difference(set1, set2));
                break;
            case '11':
                cout << "Complemento del Conjunto 1: ";
                printVector(complementVector(set1, universe));
                break;
            case '12':
                cout << "Complemento del Conjunto 2: ";
                printVector(complementVector(set2, universe));
                break;
            case '0':
                cout << "Saliendo del programa...";
                break;
            default:
                cout << "Seleccione una opción válida. ";
                break;
        } //Fin del switch
    } while (option != '0');

    return 0;
}
