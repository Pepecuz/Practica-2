// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 19
// Problema planteado: Hacer un programa que inicialice un vector de números con valores aleatorios, y posterior ordene los elementos de menor a mayor.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
    const int tamañoVector = 10;
    std::vector<int> numeros(tamañoVector);

    std::srand(std::time(0)); 
    for (int i = 0; i < tamañoVector; i++) {
        numeros[i] = std::rand() % 100; 
    }

    std::cout << "Vector antes de ordenar: ";
    for (int i = 0; i < tamañoVector; i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    std::sort(numeros.begin(), numeros.end());

    // Mostrar el vector después de ordenar
    std::cout << "Vector después de ordenar: ";
    for (int i = 0; i < tamañoVector; i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

