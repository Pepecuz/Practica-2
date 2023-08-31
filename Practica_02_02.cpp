// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 2
// Problema planteado:  Escribir un programa que a partir de un arreglo constante de 10 elementos enteros,
//determine el porcentaje de números pares positivos e impares negativos.

#include <iostream>

int main() {
    
    const int arreglo[10] = {3, -2, 7, -9, 0, 12, -5, 8, 6, -4};

    // Contadores para números pares positivos e impares negativos
    int paresPositivos = 0, imparesNegativos = 0;

    for (int i = 0; i < 10; ++i) {
        if (arreglo[i] % 2 == 0 && arreglo[i] > 0) {
            paresPositivos++;
        } else if (arreglo[i] % 2 != 0 && arreglo[i] < 0) {
            imparesNegativos++;
        }
    }

    double totalNumeros = 10.0; 
    double porcentajeParesPositivos = (paresPositivos / totalNumeros) * 100;
    double porcentajeImparesNegativos = (imparesNegativos / totalNumeros) * 100;


    std::cout << "Porcentaje de números pares positivos: " << porcentajeParesPositivos << "%" << std::endl;
    std::cout << "Porcentaje de números impares negativos: " << porcentajeImparesNegativos << "%" << std::endl;

    return 0;
}
