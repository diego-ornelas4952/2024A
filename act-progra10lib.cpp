/* Biblioteca de Funciones
Actividad de Programación 15
Diego Josuan Ornelas Durán*/

//Función para Números Aleatorios
void num_rand(int num[][15], int tamaño) {
    srand(time(0));
    for (int i = 0; i < tamaño; i++) {
        for (int j = 0; j < tamaño; j++) {
            num[i][j] = rand() % 601 - 200; 
        }
    }
}

void num_user(int num[][15], int tamaño) {
    cout << "Ingrese los números de la matriz:" <<endl;
    for (int i = 0; i < tamaño; i++) {
        for (int j = 0;  j < tamaño; j++) {
            cout << "Ingresa los valores para la posición [" << i << "][" << j << "]: ";
            cin >> num[i][j];
            }
        }
}

// Función para imprimir una matriz
void imp_Matriz(int num[][15], int tamaño) {
    for (int i = 0; i < tamaño; ++i) {
        for (int j = 0; j < tamaño; ++j) {
            cout << num[i][j] << " ";
        }
        cout << endl;
    }
}

// Función para añadir valores
void plus_Numeros(int num[][15], int tamaño) {
    int fila, columna, valor;
    char respuesta;
    do {
        cout << "Ingrese la fila donde desea añadir el valor: ";
        cin >> fila;
        cout << "Ingrese la columna donde desea añadir el valor: ";
        cin >> columna;
        cout << "Ingrese el valor: ";
        cin >> valor;

        if (fila >= 0 && fila < tamaño && columna >= 0 && columna < tamaño) {
            num[fila][columna] = valor;
            cout << "Valor añadido correctamente." << endl;
        } else {
            cout << "Posición fuera de rango." << endl;
        }

        cout << "¿Desea añadir otro valor? (s/n): ";
        cin >> respuesta;
    } while (respuesta == 's' || respuesta == 'S');
}

// Función para borrar una matriz
void borrar_Matriz(int num[][15], int tamaño) {
    for (int i = 0; i < tamaño; ++i) {
        for (int j = 0; j < tamaño; ++j) {
            num[i][j] = 0;
        }
    }
    cout << "La matriz se borró correctamente." << endl;
}

// Función para sumar dos matrices
void suma_Matriz(int matrizA[][15], int matrizB[][15], int resultado[][15], int tamaño) {
    for (int i = 0; i < tamaño; ++i) {
        for (int j = 0; j < tamaño; ++j) {
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

// Función para restar dos matrices
void resta_Matriz(int matrizA[][15], int matrizB[][15], int resultado[][15], int tamaño) {
    for (int i = 0; i < tamaño; ++i) {
        for (int j = 0; j < tamaño; ++j) {
            resultado[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
}

// Función para multiplicar dos matrices
void multi_Matriz(int matrizA[][15], int matrizB[][15], int resultado[][15], int tamaño) {
    for (int i = 0; i < tamaño; ++i) {
        for (int j = 0; j < tamaño; ++j) {
            resultado[i][j] = 0;
            for (int k = 0; k < tamaño; ++k) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

void dividir_Matriz(int matrizA[][15], int matrizB[][15], double resultado[][15], int tamaño) {

    bool inverso = true;
    for (int i = 0; i < tamaño; ++i) {
        if (matrizB[i][i] == 0) {
            inverso = false;
            break;
        }
    }

    if (!inverso) {
        cout << "La matriz B no es inverso. La división no es posible." << endl;
        return;
    }

    // Calcular la inversa de la matriz B
    int inverso_matrizB[15][15]; // Usamos double para permitir fracciones en los resultados
    for (int i = 0; i < tamaño; ++i) {
        for (int j = 0; j < tamaño; ++j) {
            if (i == j) {
                inverso_matrizB[i][j] = 1.0 / matrizB[i][j]; // Invertir los elementos de la diagonal principal
            else {
                inverso_matrizB[i][j] = 0; // Los elementos fuera de la diagonal principal se mantienen como cero
             }
            }
        }
    }
    // Multiplicar la matriz A por la inversa de la matriz B
    multi_Matriz(matrizA, inverso_matrizB, resultado, tamaño);
}