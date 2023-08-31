// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 13
// Problema planteado: - Almacenar en un arreglo los n primeros números primos.

#include <iostream>
#include <vector>

bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "Ingrese la cantidad de números primos que desea almacenar: ";
    std::cin >> n;

    std::vector<int> numerosPrimos;
    int num = 2; 

    while (numerosPrimos.size() < n) {
        if (esPrimo(num)) {
            numerosPrimos.push_back(num);
        }
        num++;
    }

    std::cout << "Los primeros " << n << " números primos son: ";
    for (int primo : numerosPrimos) {
        std::cout << primo << " ";
    }
    std::cout << std::endl;

    return 0;
}
