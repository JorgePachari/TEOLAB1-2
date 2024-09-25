#include "Procesador.h"

// Función para verificar si un string es un número válido
bool Procesador::esNumero(const string& s) {
    for (char const &ch : s) {
        if (!isdigit(ch) && ch != '.') {
            return false;
        }
    }
    return true;
}

// Verifica si el operador es válido
bool Procesador::esOperadorValido(char operador) {
    return operador == '+' || operador == '-' || operador == '*' || operador == '/';
}

// Procesar la expresión ingresada
void Procesador::procesarOperacion(const string& expresion) {
    vector<double> numeros;
    vector<char> operadores;
    string token;
    size_t i = 0;

    // Iterar sobre la expresión para separar números y operadores
    while (i < expresion.length()) {
        // Leer número
        while (i < expresion.length() && isdigit(expresion[i])) {
            token += expresion[i];
            i++;
        }
        if (!token.empty()) {
            numeros.push_back(stod(token));  // Convertir a double y agregar al vector
            token.clear(); // Limpiar el token para el siguiente número
        }

        // Leer operador
        if (i < expresion.length() && esOperadorValido(expresion[i])) {
            operadores.push_back(expresion[i]);
            i++;
        }
    }

    // Validación de que no haya más de 6 números
    if (numeros.size() > 6) {
        cout << "Error: Solo se permite un máximo de 6 números." << endl;
        return;
    }

    // Primero resolver multiplicaciones y divisiones
    for (size_t i = 0; i < operadores.size(); ++i) {
        if (operadores[i] == '*' || operadores[i] == '/') {
            double* num1 = &numeros[i];
            double* num2 = &numeros[i + 1];
            numeros[i] = administrador.operar(num1, num2, operadores[i]);
            numeros.erase(numeros.begin() + i + 1);
            operadores.erase(operadores.begin() + i);
            --i;  // Ajustar índice por la eliminación
        }
    }

    // Luego resolver sumas y restas
    double resultado = numeros[0];
    for (size_t i = 0; i < operadores.size(); ++i) {
        double* num1 = &resultado;
        double* num2 = &numeros[i + 1];
        resultado = administrador.operar(num1, num2, operadores[i]);
    }

    cout << "Resultado: " << resultado << endl;
}

