// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 8
// Problema planteado: Se tiene el arreglo
//Ventas:
//0 1 2 10 11
//vene vfeb vmar . . vnov vdic
//Donde se almacenan las ventas mensuales de una empresa y un arreglo constante que
//contiene los nombres de los meses:
//Meses:
//0 1 2 10 11
//“Ene” “Feb” “Mar” . . “Nov” “Dic”
//Escriba un programa que obtenga:
//• ¿En qué mes(es) se dieron las ventas máximas de la empresa?
//• ¿A cuánto ascendieron las ventas máximas?
//• ¿Cuál fue el total de las ventas?
//Las ventas deben ser ingresadas por teclado.

#include <iostream>
#include <vector>
#include <string>

int main() {
    const int numMeses = 12; 
    std::vector<int> ventas(numMeses); 
    std::vector<std::string> meses = {"Ene", "Feb", "Mar", "Abr", "May", "Jun", 
                                      "Jul", "Ago", "Sep", "Oct", "Nov", "Dic"};

    for (int i = 0; i < numMeses; i++) {
        std::cout << "Ingrese las ventas para " << meses[i] << ": ";
        std::cin >> ventas[i];
    }

    int maxVentas = ventas[0]; 
    std::vector<int> mesesMaxVentas; 
    
    for (int i = 1; i < numMeses; i++) {
        if (ventas[i] > maxVentas) {
            maxVentas = ventas[i];
            mesesMaxVentas.clear();
            mesesMaxVentas.push_back(i);
        } else if (ventas[i] == maxVentas) {
            mesesMaxVentas.push_back(i);
        }
    }

    
    int totalVentas = 0;
    for (int venta : ventas) {
        totalVentas += venta;
    }

    std::cout << "En el(los) mes(es) de ventas máximas: ";
    for (int mes : mesesMaxVentas) {
        std::cout << meses[mes] << " ";
    }
    std::cout << std::endl;

    std::cout << "Ventas máximas: " << maxVentas << std::endl;
    std::cout << "Total de ventas: " << totalVentas << std::endl;

    return 0;
}
