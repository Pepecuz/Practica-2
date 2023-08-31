// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 3
// Problema planteado:  Escribir un programa que genere un arreglo de 50 posiciones con números al azar en el
//rango de A - B y determine cuántos de estos elementos son números primos. 

#include <iostream>
#include <cstdlib>
#include <ctime>

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    
    srand(time(nullptr));

    int A, B;
    std::cout << "Ingrese el valor de A: ";
    std::cin >> A;
    std::cout << "Ingrese el valor de B: ";
    std::cin >> B;

    const int tamanoArreglo = 50;
    int arreglo[tamanoArreglo];
    int cantidadPrimos = 0;

    for (int i = 0; i < tamanoArreglo; ++i) {
        arreglo[i] = rand() % (B - A + 1) + A;
        if (esPrimo(arreglo[i])) {
            cantidadPrimos++;
        }
    }


    std::cout << "Arreglo generado: ";
    for (int i = 0; i < tamanoArreglo; ++i) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << "\nCantidad de números primos: " << cantidadPrimos << std::endl;

    return 0;
}
