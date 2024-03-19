/*Biblioteca de Funciones
- Diego Josuan Ornelas Durán
- Actividad Integradora 1
- Programación Estructurada
19.03.24
*/

void insertar_val(int* usr_num, int& tamaño, int valor) {
    // Verificar si el valor ya existe
    for (int i = 0; i < tamaño; ++i) {
        if (usr_num[i] == valor) {
            cout << "El valor " << valor << " ya está insertado." << endl;
            return;
        }
    }

    // Insertar el valor y aumentar el tamaño
    usr_num[tamaño] = valor;
    ++tamaño;
    cout << "Valor " << valor << " insertado correctamente." << endl;
}
