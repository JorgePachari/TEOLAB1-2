#ifndef PROCESADOR_H
#define PROCESADOR_H

#include "Administrador.h" // Incluir solo la cabecera
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cctype>  // Para isdigit()

using namespace std;

class Procesador {
private:
    Administrador administrador; // Usar la clase directamente

public:
    void procesarOperacion(const string& expresion);
    
private:
    bool esNumero(const string& s);
    bool esOperadorValido(char operador);
};

#endif // PROCESADOR_H

