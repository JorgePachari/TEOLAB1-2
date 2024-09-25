#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <iostream>
#include <stdexcept>

using namespace std;

class Operaciones {
public:
    double suma(double* a, double* b);
    double resta(double* a, double* b);
    double multiplicacion(double* a, double* b);
    double division(double* a, double* b);
};

#endif // OPERACIONES_H

