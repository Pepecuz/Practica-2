// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 10
// Problema planteado: - Dado un arreglo que contiene la población de los nueve departamentos del país y otro que
//contiene los nombres de estos departamentos, indique el nombre del departamento que tiene
//la mayor población y el nombre del departamento que tiene la menor población.

#include <iostream>
#include <vector>
#include <string>

int main() {
    const int numDepartamentos = 9; 
    std::vector<std::string> nombres = {"La Paz", "Santa", "Potosi",
                                        "Beni", "Pando", "Sucre",
                                        "Cocha", "Tarija", "Oruro"};
    std::vector<int> poblaciones = {1000000, 2000000, 500000, 800000, 1200000,
                                    600000, 300000, 700000, 400000};

    int maxPoblacion = poblaciones[0];
    int minPoblacion = poblaciones[0];
    int posMax = 0;
    int posMin = 0;

    // Encontrar la población máxima y mínima junto con las posiciones correspondientes
    for (int i = 1; i < numDepartamentos; i++) {
        if (poblaciones[i] > maxPoblacion) {
            maxPoblacion = poblaciones[i];
            posMax = i;
        }

        if (poblaciones[i] < minPoblacion) {
            minPoblacion = poblaciones[i];
            posMin = i;
        }
    }

   
    std::cout << "Departamento con la mayor población: " << nombres[posMax] << std::endl;
    std::cout << "Departamento con la menor población: " << nombres[posMin] << std::endl;

    return 0;
}
