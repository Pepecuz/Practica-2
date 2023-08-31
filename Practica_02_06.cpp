// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 6
// Problema planteado:  - Dados dos arreglos constantes de igual tamaño, generar un tercer arreglo con los elementos
//intercalados.

#include <iostream>

int main() {
    const int tamaño = 6; 
    int arreglo1[tamaño] = {1, 3, 5, 7, 9, 11}; 
    int arreglo2[tamaño] = {2, 4, 6, 8, 10, 12}; // Segundo arreglo constante
    int intercalado[2 * tamaño]; // Arreglo resultante intercalado

    for (int i = 0; i < tamaño; i++) {
        intercalado[2 * i] = arreglo1[i];     // Coloca el elemento del primer arreglo
        intercalado[2 * i + 1] = arreglo2[i]; // Coloca el elemento del segundo arreglo
    }

    std::cout << "Arreglo intercalado: ";
    for (int i = 0; i < 2 * tamaño; i++) {
        std::cout << intercalado[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
