/***************PRESENTACIÓN***************
Nombre: Diego Josuan Ornelas Durán
Fecha: 02 de Febrero de 2024
Programa: 2act_progra.cpp
Centro Universitario de Los Altos / Universidad de Guadalajara
Ingeniería en Computación / Segundo Semestre
Profesor: Sergio Franco Casillas
Descripción: Trabajar con caractéres especiales
Versión: 1.0
******************************************/
//Librerías utilizadas
#include <cstdio>
//Inicio del main
int main() {
    // Caracteres de escape
    //Aqui empecé utilizando un cambio de línea
    printf("Hola! Este es mi código:\n\n");
    printf("Hello World!\n");
    printf("Este es un\tprograma\ten C++.\n");
    //Aqui utilicé \b para eliminar un caracter
    printf("Puedo eliminar un caracter\b de esta oración.\n");
    //Aquí utilice \r para hacer un retorno de carro
    printf("Primera línea.\nSegunda línea.\rTercera línea.\n");
    //Aqui utilice la diagonal invertida para poder añadir comillas dobles
    printf("Tambien puedo usar \"comillas dobles\" y caracteres especiales.\n");
    //Tambien volví a utilizar la diagonal invertida dos veces para poder imprimirla
    printf("Tambien puedo usar una barra invertida para una ruta de archivo por ejemplo: C:\\Usuarios\\Usuario\\Documentos\\archivo.txt\n");
    printf("\nTambien puedo cambiar donde quiero que este un texto, como por ejemplo:\n");

    //Cadenas de control
    //Aqui moví "nombre" hacia la izquierda
    printf("%-20s%s\n", "Nombre:", "Diego");
    //Aqui moví "edad" hacia la derecha
    printf("%20s%d\n", "Edad:", 18);
    //Aqui escribí un número decimal grande como pi y solo imprimí dos decimales
    double pi = 3.141592653589793;
    printf("Valor de pi: %.2f\n", pi);
    //Aqui el valor se imprime con un valor positivo
    int numero = 42;
    printf("Número: %+d\n", numero);
    //Aqui otro número se imprime con valor negativo
    int negativo = -17;
    printf("Número negativo: %d\n", negativo);

    return 0;
}

