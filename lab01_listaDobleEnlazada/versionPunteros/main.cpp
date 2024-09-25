#include "DoublyLinkedList.h"
#include <iostream>
#include <limits>

void mostrarMenu(DoublyLinkedList& list) {
    int opcion, valor;

    do {
        std::cout << "===== MENÚ DE OPCIONES =====" << std::endl;
        std::cout << "1. Agregar al inicio" << std::endl;
        std::cout << "2. Agregar al final" << std::endl;
        std::cout << "3. Eliminar un valor" << std::endl;
        std::cout << "4. Imprimir la lista desde el inicio" << std::endl;
        std::cout << "5. Imprimir la lista desde el final" << std::endl;
        std::cout << "6. Salir" << std::endl;
        std::cout << "===========================" << std::endl;

        std::cout << "Elige una opción: ";
        std::cin >> opcion;

        if (std::cin.fail() || opcion < 1 || opcion > 6) {
            std::cout << "Error: Opción no válida. Intenta de nuevo." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        switch (opcion) {
            case 1:
                std::cout << "Ingresa el valor a agregar al inicio: ";
                std::cin >> valor;
                if (std::cin.fail()) {
                    std::cout << "Error: Ingresa un número válido." << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                } else {
                    list.prepend(valor);
                }
                break;
            case 2:
                std::cout << "Ingresa el valor a agregar al final: ";
                std::cin >> valor;
                if (std::cin.fail()) {
                    std::cout << "Error: Ingresa un número válido." << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                } else {
                    list.append(valor);
                }
                break;
            case 3:
                std::cout << "Ingresa el valor a eliminar: ";
                std::cin >> valor;
                if (std::cin.fail()) {
                    std::cout << "Error: Ingresa un número válido." << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                } else {
                    list.deleteValue(valor);
                }
                break;
            case 4:
                std::cout << "Lista desde el inicio: ";
                list.printForward();
                break;
            case 5:
                std::cout << "Lista desde el final: ";
                list.printBackward();
                break;
            case 6:
                std::cout << "Saliendo del programa..." << std::endl;
                break;
        }
    } while (opcion != 6);
}

int main() {
    DoublyLinkedList list;
    mostrarMenu(list);
    return 0;
}

