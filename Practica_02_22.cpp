// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 22
// Problema planteado:  - Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector.

#include <iostream>
#include <vector>

int main() {
    int N;
    std::cout << "Ingrese la dimensión N de los vectores: ";
    std::cin >> N;

    std::vector<int> vector1(N); 
    std::vector<int> vector2(N); 
    std::vector<int> vectorResultado(N); 

    std::cout << "Ingrese " << N << " valores para vector1:" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cin >> vector1[i];
    }
    
    std::cout << "Ingrese " << N << " valores para vector2:" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cin >> vector2[i];
    }

    // Calcular la multiplicación de los vectores
    for (int i = 0; i < N; i++) {
        vectorResultado[i] = vector1[i] * vector2[i];
    }

    std::cout << "Vector resultado (multiplicación de vector1 y vector2):" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cout << vectorResultado[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
