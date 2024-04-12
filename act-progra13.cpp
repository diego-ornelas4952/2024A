/***************PRESENTACIÓN***************
Nombre: Diego Josuan Ornelas Durán
Fecha: 9 de Abril de 2024
Programa: act_progra13.cpp
Centro Universitario de Los Altos / Universidad de Guadalajara
Ingeniería en Computación / Segundo Semestre
Profesor: Sergio Franco Casillas
Descripción: Código para contar vocales, consonantes y espacios
Versión: 1.0
******************************************/

#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

int main() {
    string frase;
    cout << "Ingrese una frase o una palabra: ";
    getline(cin, frase);

    int vocales = 0;
    int consonantes = 0;
    int espacios = 0;

    for (size_t i = 0; i < frase.length(); i++) {
        char palabra = frase[i];
        if (isalpha(palabra)) {
            char minuscula = tolower(palabra);
            if (minuscula == 'a' || minuscula == 'e' || minuscula == 'i' || minuscula == 'o' || minuscula == 'u') {
                vocales++;
            } else {
                consonantes++;
            }
        } else if (isspace(palabra)) {
            espacios++;
        }

    }

    bool palindromo = true;
    for (size_t i = 0; i < frase.length() / 2; i++) {
        if (tolower(frase[i]) != tolower(frase[frase.length() - 1 - i])) {
            palindromo = false;
            break;
        }
    }

    string palabra_mayus, palabra_minus;
    for (size_t i = 0; i < frase.length(); i++) {
        char palabra = frase[i];
        palabra_mayus += toupper(palabra);
        palabra_minus += tolower(palabra);
    }

    cout << "******* RESULTADOS *******" << endl;
    cout << "Vocales: " << vocales << endl;
    cout << "Consonantes: " << consonantes << endl;
    cout << "Espacios: " << espacios << endl;
    cout << "Palíndromo: " << (palindromo ? "Sí" : "No") << endl;
    cout << "Frase en mayúsculas: " << palabra_mayus << endl;
    cout << "Frase en minúsculas: " << palabra_minus << endl;

    string concatenar;
    cout << "Ingresa otra palabra para concatenarla: ";
    getline(cin, concatenar);
    string concatenada = frase + "H " + concatenar;
    cout << endl;
    cout << "Frase concatenada: " << concatenada << endl;

    return 0;
}
