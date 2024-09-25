#include "Administrador.h"

// Método para realizar la operación
double Administrador::operar(double* num1, double* num2, char operador) {
    switch (operador) {
        case '+':
            return operaciones.suma(num1, num2);
        case '-':
            return operaciones.resta(num1, num2);
        case '*':
            return operaciones.multiplicacion(num1, num2);
        case '/':
            return operaciones.division(num1, num2);
        default:
            throw invalid_argument("Error: Operador no válido"); // Lanzar excepción
    }
}

