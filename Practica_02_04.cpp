// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 4
// Problema planteado:  Un arreglo contiene las edades de un grupo de 50 personas con números al azar, determine:
//el porcentaje de mayores (>=18 años) y menores de edad (<18 años).

#include <iostream>

int main() {
    const int n = 50; 
    int edades[n];    
    int mayores = 0;  
    int menores = 0;  // Contador para las personas menores de edad

    for (int i = 0; i < n; i++) {
        edades[i] = rand() % 100 + 1; 
    }
    
    for (int i = 0; i < n; i++) {
        if (edades[i] >= 18) {
            mayores++;
        } else {
            menores++;
        }
    }

    double porcentajeMayores = (static_cast<double>(mayores) / n) * 100;
    double porcentajeMenores = (static_cast<double>(menores) / n) * 100;

    std::cout << "Porcentaje de mayores de edad: " << porcentajeMayores << "%" << std::endl;
    std::cout << "Porcentaje de menores de edad: " << porcentajeMenores << "%" << std::endl;

    return 0;
}

