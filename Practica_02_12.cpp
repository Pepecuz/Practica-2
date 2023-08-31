// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 12
// Problema planteado: Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y otro
//contiene los nombres de estos minerales, para obtener:
//- Buscar por nombre de mineral y desplegar la producción
//- Ordenar del mayor al menor (producción) y mostrar:
//Mineral Produccion ™
//SN 998.000
//SB 876.500
//AU 786.670
//PT 636.143
//AG 135.567
//CU 109.412

#include <iostream>
#include <vector>
#include <algorithm>

struct Mineral {
    std::string nombre;
    double produccion;
};

bool compararPorProduccion(const Mineral& mineral1, const Mineral& mineral2) {
    return mineral1.produccion > mineral2.produccion;
}

int main() {
    const int numMinerales = 6;
    std::vector<Mineral> minerales = {{"SN", 998.000},
                                      {"SB", 876.500},
                                      {"AU", 786.670},
                                      {"PT", 636.143},
                                      {"AG", 135.567},
                                      {"CU", 109.412}};

    // Buscar por nombre de mineral
    std::string nombreBuscar;
    std::cout << "Ingrese el nombre del mineral a buscar: ";
    std::cin >> nombreBuscar;

    bool encontrado = false;
    for (const Mineral& mineral : minerales) {
        if (mineral.nombre == nombreBuscar) {
            std::cout << "Producción de " << mineral.nombre << ": " << mineral.produccion << " toneladas" << std::endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        std::cout << "Mineral no encontrado." << std::endl;
    }

    std::sort(minerales.begin(), minerales.end(), compararPorProduccion);

    std::cout << "Mineral\tProduccion (toneladas)" << std::endl;
    for (const Mineral& mineral : minerales) {
        std::cout << mineral.nombre << "\t" << mineral.produccion << std::endl;
    }

    return 0;
}
