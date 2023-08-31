// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 
// Problema planteado:  Un arreglo contiene las estaturas en cm de N personas (estatura al azar en un rango de 50 a
//240), determinar la mayor estatura, la estatura más baja y el promedio de estaturas.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int N = 50; 
    int estaturas[N]; // Arreglo para almacenar las estaturas
    int mayor = 0; 
    int menor = 240; 
    int totalEstaturas = 0; 
    
    std::srand(std::time(0));

   
    for (int i = 0; i < N; i++) {
        estaturas[i] = std::rand() % 191 + 50; 
        totalEstaturas += estaturas[i]; // Acumular la estatura para el cálculo del promedio
        
       
        if (estaturas[i] > mayor) {
            mayor = estaturas[i];
        }
        if (estaturas[i] < menor) {
            menor = estaturas[i];
        }
    }

    double promedio = static_cast<double>(totalEstaturas) / N;

    // Mostrar resultados
    std::cout << "La mayor estatura es: " << mayor << " cm" << std::endl;
    std::cout << "La estatura más baja es: " << menor << " cm" << std::endl;
    std::cout << "El promedio de estaturas es: " << promedio << " cm" << std::endl;

    return 0;
}

