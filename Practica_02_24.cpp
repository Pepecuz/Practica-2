// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 24
// Problema planteado:Leer una cadena en mayúsculas y cámbielas en minúscula

#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string cadena;
    std::cout << "Ingrese una cadena en mayúsculas: ";
    std::cin >> cadena;

    // Convertir la cadena en minúsculas
    for (char &c : cadena) {
        c = std::tolower(c);
    }

    std::cout << "La cadena en minúsculas es: " << cadena << std::endl;

    return 0;
}
