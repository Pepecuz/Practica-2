// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 16
// Problema planteado: Crear un vector de 5 elementos de cadenas de caracteres, inicializa el vector con datos
//leídos por el teclado. Copia los elementos del vector en otro vector pero en orden inverso, y
//muéstralo por la pantalla.

#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> palabras(5); 
    
    for (int i = 0; i < 5; i++) {
        std::cout << "Ingrese una palabra: ";
        std::cin >> palabras[i];
    }

    std::vector<std::string> inverso(5);
    for (int i = 0; i < 5; i++) {
        inverso[i] = palabras[4 - i];
    }

    // Mostrar el vector en orden inverso
    std::cout << "Vector en orden inverso: ";
    for (int i = 0; i < 5; i++) {
        std::cout << inverso[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

