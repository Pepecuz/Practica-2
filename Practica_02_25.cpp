// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 25
// Problema planteado:Genere un vector de N elementos y llénelos aleatoriamente entre valores de 1 a 100 e
//indique el mayor elemento, el menor elemento y el promedio. 

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    int N;
    std::cout << "Ingrese la cantidad de elementos del vector: ";
    std::cin >> N;

    std::vector<int> numeros(N);
    std::srand(std::time(0)); 

    for (int i = 0; i < N; i++) {
        numeros[i] = std::rand() % 100 + 1;
    }

    int mayor = numeros[0];
    int menor = numeros[0];
    int suma = 0;

    for (int i = 0; i < N; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
        suma += numeros[i];
    }

    double promedio = static_cast<double>(suma) / N;

    // Mostrar resultados
    std::cout << "El mayor elemento es: " << mayor << std::endl;
    std::cout << "El menor elemento es: " << menor << std::endl;
    std::cout << "El promedio es: " << promedio << std::endl;

    return 0;
}
