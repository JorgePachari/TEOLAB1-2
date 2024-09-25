#include <iostream>
#include <iomanip>
#include <chrono>

int main() {
    std::string jugadores[] = {"Cristiano Ronaldo", "Leonel Messi", "Mohamed Salah", "Neymar", "Angel Di Maria"};
    int puntos[] = {1500, 1800, 1600, 1700, 1450};

    auto inicio_setw = std::chrono::high_resolution_clock::now();
    
    std::cout << std::setw(20) << "Jugador" << std::setw(15) << "Puntos" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    
    for (int i = 0; i < 5; ++i) {
        std::cout << std::setw(20) << jugadores[i] << std::setw(15) << puntos[i] << std::endl;
    }

    auto fin_setw = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duracion_setw = fin_setw - inicio_setw;

    std::cout << "\nTiempo de ejecucion con setw: " << duracion_setw.count() << " segundos\n\n";

    return 0;
}
