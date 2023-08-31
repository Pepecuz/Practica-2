// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 1
// Problema planteado: Almacenar un vector de tamaño N, con números al azar entre A y B, e imprima la suma de
//los componentes de índice par y la resta de los componentes de índice impar.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    // Configuración de números aleatorios
    srand(time(nullptr));

    int N, A, B;
    std::cout << "Ingrese el tamaño del vector (N): ";
    std::cin >> N;
    std::cout << "Ingrese el valor de A: ";
    std::cin >> A;
    std::cout << "Ingrese el valor de B: ";
    std::cin >> B;

    std::vector<int> numeros(N);
    for (int i = 0; i < N; ++i) {
        numeros[i] = rand() % (B - A + 1) + A;
    }

    int sumaPares = 0, restaImpares = 0;
    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) {
            sumaPares += numeros[i];
        } else {
            restaImpares -= numeros[i];
        }
    }

    std::cout << "Vector generado: ";
    for (int i = 0; i < N; ++i) {
        std::cout << numeros[i] << " ";
    }
    std::cout << "\nSuma de componentes de índice par: " << sumaPares << std::endl;
    std::cout << "Resta de componentes de índice impar: " << restaImpares << std::endl;

    return 0;
}
