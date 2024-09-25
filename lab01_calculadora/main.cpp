#include <iostream>
#include "Procesador.h"

using namespace std;

void mostrarMenu() {
    cout << "=== Calculadora ===" << endl;
    cout << "1. Realizar una operación" << endl;
    cout << "2. Salir" << endl;
    cout << "Selecciona una opción: ";
}

int main() {
    Procesador procesador;
    string expresion;
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa una operación matemática (máximo 6 números): ";
                cin.ignore(); // Limpiar el buffer de entrada
                getline(cin, expresion);
                procesador.procesarOperacion(expresion);
                break;
            case 2:
                cout << "Saliendo de la calculadora..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
                break;
        }
    } while (opcion != 2);

    return 0;
}

