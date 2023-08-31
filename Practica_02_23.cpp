// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 23
// Problema planteado: Leer 2 vectores de dimensión N y combine ambos en otro vector.

#include <iostream>
#include <vector>

int main() {
    int N;
    std::cout << "Ingrese la dimensión N de los vectores: ";
    std::cin >> N;

    std::vector<int> vector1(N); 
    std::vector<int> vector2(N); 
    std::vector<int> vectorCombinado(2 * N); 

    std::cout << "Ingrese " << N << " valores para vector1:" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cin >> vector1[i];
    }
    
    std::cout << "Ingrese " << N << " valores para vector2:" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cin >> vector2[i];
    }

    for (int i = 0; i < N; i++) {
        vectorCombinado[i] = vector1[i];
        vectorCombinado[i + N] = vector2[i];
    }

    // Mostrar vectorCombinado
    std::cout << "Vector combinado:" << std::endl;
    for (int i = 0; i < 2 * N; i++) {
        std::cout << vectorCombinado[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
