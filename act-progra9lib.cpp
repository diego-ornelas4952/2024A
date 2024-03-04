/* Funciones para la Actividad de Programación 9
 * Diego Josuan Ornelas Durán */

// Función para imprimir el conjunto
void mostrarConjuntos(const vector<int>& conjunto) {
    cout << "{ ";
    for (const auto& elemento : conjunto) {
        cout << elemento << " ";
    }
    cout << "}" << endl;
}

// Función para añadir un elemento
void plusElem(vector<int>& conjunto) {
    int elemento;
    cout << "Ingrese el elemento que desea insertar: ";
    cin >> elemento;
    conjunto.push_back(elemento);
}

// Función para borrar un elemento
void borrarElem(vector<int>& conjunto) {
    if (!conjunto.empty()) {
        int elemento;
        cout << "Ingrese el elemento que desea borrar: ";
        cin >> elemento;
        auto proceso = find(conjunto.begin(), conjunto.end(), elemento);
        if (proceso != conjunto.end()) {
            conjunto.erase(proceso);
            cout << "El elemento se borró correctamente. " << endl;
        } else {
            cout << "El elemento ingresado no se ha encontrado en el conjunto. Inténtelo de nuevo. " <<endl;
        }
    } else {
        cout << "El conjunto está vacío. Inténtelo de nuevo. " << endl;
    }
}

// Función para calcular la diferencia
vector<int> restaConj(const vector<int>& conjunto1, const vector<int>& conjunto2) {
    vector<int> resultado;
    for (const auto& elemento : conjunto1) {
        if (find(conjunto2.begin(), conjunto2.end(), elemento) == conjunto2.end()) {
            resultado.push_back(elemento);
        }
    }
    return resultado;
}

// Función para vaciar el conjunto
void limpiarConj(vector<int>& conjunto) {
    conjunto.clear();
    cout << "El conjunto se vació correctamente. " << endl;
}

// Función de unión
vector<int> unionConj(const vector<int>& conjunto1, const vector<int>& conjunto2) {
    vector<int> resultado = conjunto1;
    for (const auto& elemento : conjunto2) {
        if (find(resultado.begin(), resultado.end(), elemento) == resultado.end()) {
            resultado.push_back(elemento);
        }
    }
    return resultado;
}

// Función de intersección
vector<int> interConj(const vector<int>& conjunto1, const vector<int>& conjunto2) {
    vector<int> resultado;
    for (const auto& elemento : conjunto1) {
        if (find(conjunto2.begin(), conjunto2.end(), elemento) != conjunto2.end()) {
            resultado.push_back(elemento);
        }
    }
    return resultado;
}

// Función para calcular el complemento
vector<int> complConj(const vector<int>& conjunto, const vector<int>& universo) {
    vector<int> resultado;
    for (const auto& elemento : universo) {
        if (find(conjunto.begin(), conjunto.end(), elemento) == conjunto.end()) {
            resultado.push_back(elemento);
        }
    }
    return resultado;
}

void menu() {
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
}

