// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 21
// Problema planteado:  Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros cada uno, pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2

#include <iostream>
#include <vector>

int main() {
    std::vector<int> vector1(5);
    std::vector<int> vector2(5); 
    std::vector<int> vector3(5); 

    std::cout << "Ingrese 5 valores para vector1:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cin >> vector1[i];
    }

    std::cout << "Ingrese 5 valores para vector2:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cin >> vector2[i];
    }

    for (int i = 0; i < 5; i++) {
        vector3[i] = vector1[i] + vector2[i];
    }

    // Mostrar vector3
    std::cout << "Vector resultante (vector3 = vector1 + vector2):" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << vector3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
