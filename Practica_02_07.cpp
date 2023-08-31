// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 7
// Problema planteado:  A partir de dos vectores constantes que contienen nombres de 7 personas cada uno.
//Escribir un programa que escriba la palabra “Iguales” si ambos vectores son iguales y
//“Diferentes” si no lo son. Serán iguales cuando en la misma posición de ambos vectores se
//tenga el mismo valor para todos los elementos.

#include <iostream>
#include <vector>

int main() {
    const int tamaño = 7; 
    std::vector<std::string> vector1 = {"Luisa", "Luis", "María", "Jose", "Pedro", "Sofía", "Valeria"};
    std::vector<std::string> vector2 = {"Luisa", "Luis", "María", "Jose", "Pedro", "Sofía", "Valeria"};
    
    bool iguales = true;

    for (int i = 0; i < tamaño; i++) {
        if (vector1[i] != vector2[i]) {
            iguales = false;
            break;
        }
    }

    if (iguales) {
        std::cout << "Iguales" << std::endl;
    } else {
        std::cout << "Diferentes" << std::endl;
    }

    return 0;
}

