#include <stdio.h>

int num, num1, num2, resultado;

int main() {
    printf("Selecciona una opción para continuar: \n");
    printf("1. Suma, 2. Resta, 3. Multiplicación, 4. División \n");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Ingresa un número: \n");
        scanf("%d", &num1);
        printf("Ingresa otro número: \n");
        scanf("%d", &num2);

        resultado = num1 + num2;
        printf("El resultado es: %d", resultado);
        break;
    
    case 2:
        printf("Ingresa un número: \n");
        scanf("%d", &num1);
        printf("Ingresa otro número: \n");
        scanf("%d", &num2);

        resultado = num1 - num2;
        printf("El resultado es: %d", resultado);
        break;

    case 3:
        printf("Ingresa un número: \n");
        scanf("%d", &num1);
        printf("Ingresa otro número: \n");
        scanf("%d", &num2);

        resultado = num1 * num2;
        printf("El resultado es: %d", resultado);
        break;

    case 4:
        printf("Ingresa un número: \n");
        scanf("%d", &num1);
        printf("Ingresa otro número: \n");
        scanf("%d", &num2);

        resultado = num1 / num2;
        printf("El resultado es: %d", resultado);
        break;

    default:
    printf("Ingresa una opción válida. \n");
        break;
    }

    return 0;
}