#include "Operaciones.h"

double Operaciones::suma(double* a, double* b) {
    return *a + *b;
}

double Operaciones::resta(double* a, double* b) {
    return *a - *b;
}

double Operaciones::multiplicacion(double* a, double* b) {
    return *a * *b;
}

double Operaciones::division(double* a, double* b) {
    if (*b == 0) {
        throw runtime_error("Error: División por cero");
    }
    return *a / *b;
}

