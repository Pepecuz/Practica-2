// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 18
// Problema planteado: - Programa que declare un vector de diez elementos enteros y pida números para rellenarlo
//hasta que se llene el vector o se introduzca un número negativo. Entonces se debe imprimir el
//vector (sólo los elementos introducidos).

#include <iostream>
#include <vector>

int main() {
    const int tamañoVector = 10;
    std::vector<int> numeros(tamañoVector);
    int contador = 0;

    while (contador < tamañoVector) {
        int numero;
        std::cout << "Ingrese un número: ";
        std::cin >> numero;

        if (numero < 0) {
            break;
        }

        numeros[contador] = numero;
        contador++;
    }

    // Imprimir los elementos introducidos
    std::cout << "Elementos introducidos: ";
    for (int i = 0; i < contador; i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
