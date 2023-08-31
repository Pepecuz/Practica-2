// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 11
// Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de este arreglo determine la desviación típica.

#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> edades;
    int edad;

 
    while (true) {
        std::cout << "Ingrese una edad (-1 para finalizar): ";
        std::cin >> edad;
        if (edad == -1) {
            break;
        }
        edades.push_back(edad);
    }

    int n = edades.size();
    if (n == 0) {
        std::cout << "No se ingresaron edades." << std::endl;
        return 0;
    }

  
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += edades[i];
    }
    double media = suma / n;

   
    double sumCuadradosDif = 0;
    for (int i = 0; i < n; i++) {
        double dif = edades[i] - media;
        sumCuadradosDif += dif * dif;
    }

 
    double desviacion = std::sqrt(sumCuadradosDif / n);

    std::cout << "La desviación estándar es: " << desviacion << std::endl;

    return 0;
}
