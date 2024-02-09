/***************PRESENTACIÓN***************
Nombre: Diego Josuan Ornelas Durán
Fecha: 06 de Febrero de 2024
Programa: act_progra3.cpp
Centro Universitario de Los Altos / Universidad de Guadalajara
Ingeniería en Computación / Segundo Semestre
Profesor: Sergio Franco Casillas
Descripción: Trabajar con ciclos imprimiendo valores
Versión: 1.0
******************************************/
#include <cstdio>

int main() { //Inicio de main
    //Variables
    int num_usuario;
    char opt;

    do { //Inicio del do
        printf("Ingrese un número, por favor: \n");
        scanf("%d", &num_usuario);

        if (num_usuario < 0 || num_usuario > 1000) {
            printf("No es posible calcular el valor proporcionado. Por favor, inténtelo de nuevo. \n");
        } else {
            int veces, incremento;
            if (num_usuario > 0 && num_usuario <= 500) {
                veces = 100;
                incremento = 5;
            } else {
                veces = 50;
                incremento = 10;
            }
            //Inicio del for
            for (int i = 1; i <= veces; i++) {
                int resultado = num_usuario + (i * incremento);
                printf("La vez %d es de: %d\n", i, resultado);
            }
        }

        printf("El ciclo ha terminado. Si desea ingresar otro número presione \"S\", de otro modo presione cualquier tecla para salir:");
        scanf(" %c", &opt);
    } while (opt == 'S' || opt == 's');
    printf("Cerrando programa...");
    return 0;
} //Fin del main
