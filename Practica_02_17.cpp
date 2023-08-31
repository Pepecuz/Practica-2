// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 17
// Problema planteado: - Se quiere realizar un programa que lea por teclado las 5 notas obtenidas por un alumno
//(comprendidas entre 0 y 100). A continuación, debe mostrar todas las notas, la nota media, la
//nota más alta que ha sacado y la menor

#include <iostream>
#include <vector>

int main() {
    const int numNotas = 5;
    std::vector<int> notas(numNotas); // Vector de notas
    int sumaNotas = 0;
    int notaMaxima = 0;
    int notaMinima = 100;

    for (int i = 0; i < numNotas; i++) {
        std::cout << "Ingrese la nota " << i + 1 << ": ";
        std::cin >> notas[i];

        sumaNotas += notas[i];

        if (notas[i] > notaMaxima) {
            notaMaxima = notas[i];
        }

        if (notas[i] < notaMinima) {
            notaMinima = notas[i];
        }
    }

    double notaMedia = static_cast<double>(sumaNotas) / numNotas;

    std::cout << "Notas obtenidas: ";
    for (int i = 0; i < numNotas; i++) {
        std::cout << notas[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Nota media: " << notaMedia << std::endl;
    std::cout << "Nota más alta: " << notaMaxima << std::endl;
    std::cout << "Nota más baja: " << notaMinima << std::endl;

    return 0;
}

