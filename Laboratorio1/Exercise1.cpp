#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

int main() {
    int N;
    char opcion;
    
    std::cout << "Digite un numero entero positivo N: ";
    std::cin >> N;
    
    std::cout << "Digite una letra ('g' para generar numeros, 'i' para ingresarlos): ";
    std::cin >> opcion;

    std::vector<int> numeros;
    if (opcion == 'g') {
        std::srand(std::time(0));
        for (int i = 0; i < N; ++i) {
            numeros.push_back(std::rand() % N + 1);
        }
    } else if (opcion == 'i') {
        int num;
        for (int i = 0; i < N; ++i) {
            std::cout << "Ingrese un numero: ";
            std::cin >> num;
            numeros.push_back(num);
        }
    } else {
        std::cout << "Opción inválida." << std::endl;
        return 1;
    }

    std::sort(numeros.begin(), numeros.end(), std::greater<int>());

    std::cout << "Numeros ordenados de mayor a menor: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
