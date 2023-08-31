// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 15
// Problema planteado: Realizar un programa que defina un vector de 10 enteros, a continuación lo inicialice con
// aleatorios (del 1 al 10) y posteriormente muestre en pantalla cada elemento del vector
//junto con su cuadrado y su cubo.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    std::vector<int> numeros(10); // Vector de 10 enteros
    std::srand(std::time(0)); 

    for (int i = 0; i < 10; i++) {
        numeros[i] = std::rand() % 10 + 1;
    }

    for (int i = 0; i < 10; i++) {
        int numero = numeros[i];
        int cuadrado = numero * numero;
        int cubo = numero * numero * numero;

        std::cout << "Número: " << numero << " - Cuadrado: " << cuadrado << " - Cubo: " << cubo << std::endl;
    }

    return 0;
}
