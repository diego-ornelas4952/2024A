#include "iostream"
#include "string"
using namespace std;


int main()
{
    string titulos[5];
    string autores[5];
    cout << "Por favor ingrese la siguiente información de los Libros: \n";
    for(int i = 0; i < 5; i++)
    {
        cout << "\n******* Libro " << i + 1 << "********:\n";
        cout << "Titulo: ";
        cin >> titulos[i];
        cout << "Autor: ";
        cin >> autores[i];
    }
}
