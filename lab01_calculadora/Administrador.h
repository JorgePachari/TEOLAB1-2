#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include "Operaciones.h" // Incluir solo la cabecera

class Administrador {
private:
    Operaciones operaciones; // Usar la clase directamente

public:
    double operar(double* num1, double* num2, char operador);
};

#endif // ADMINISTRADOR_H

