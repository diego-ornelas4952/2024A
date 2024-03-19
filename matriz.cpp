#include <iostream>
#include <stdio.h>
#include <string>

//Declaración de Matriz
int matriz1[2][2] = {{1,2},{3,4}}; //Matriz de 4 elementos
int columnas = matriz1[1][1]; //Acceder a la casilla 1,1 
int first_num = matriz1[0][0]; //Primer casilla será 0,0

int main(){ //Inicio de main
    //Se imprime el número que está en la primera casilla
    printf("%d", first_num);
}