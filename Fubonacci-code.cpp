/***************PRESENTACIÓN***************
Nombre: Diego Josuan Ornelas Durán
Fecha: 09 de Febrero de 2024
Programa: act_progra4.cpp
Centro Universitario de Los Altos / Universidad de Guadalajara
Ingeniería en Computación / Segundo Semestre
Profesor: Sergio Franco Casillas
Descripción: Imprimir la serie Fibonacci con distintos ciclos
Versión: 1.0
******************************************/
#include <cstdio>

int main() {
    int max, option, num_1 = 0, num_2 = 1, num_3;

    do {
        printf("Impresora de Serie Fibonacci.\n");
        printf("Ingrese un valor máximo: \n");
        scanf("%d", &max);
        printf("Elija el ciclo a utilizar: \n");
        printf("1. For \n");
        printf("2. While \n");
        printf("3. Do-While \n");
        printf("4. Salir del programa \n");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Serie Fibonacci utilizando For: \n");
                num_1 = 0;
                num_2 = 1;
                for (int i = 0; num_1 < max; i++) {
                    printf("%d ", num_1);
                    num_3 = num_1 + num_2;
                    num_1 = num_2;
                    num_2 = num_3;
                }
                printf("\n");
                break;

            case 2:
                printf("Serie Fibonacci utilizando While: \n");
                num_1 = 0;
                num_2 = 1;
                while (num_1 < max) {
                    printf("%d ", num_1);
                    num_3 = num_1 + num_2;
                    num_1 = num_2;
                    num_2 = num_3;
                }
                printf("\n");
                break;

            case 3:
                printf("Serie Fibonacci utilizando Do-While: \n");
                num_1 = 0;
                num_2 = 1;
                do {
                    printf("%d ", num_1);
                    num_3 = num_1 + num_2;
                    num_1 = num_2;
                    num_2 = num_3;
                } while (num_1 < max);
                printf("\n");
                break;

            case 4:
                printf("Saliendo del programa... \n");
                break;

            default:
                printf("Elija una opción válida: \n");
                break;
        }
    } while (option != 4);

    return 0;
}
