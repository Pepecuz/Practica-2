// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 20
// Problema planteado: - Crea un programa que pida un número al usuario un número de mes (por ejemplo, el 4) y
//diga cuántos días tiene (por ejemplo, 30) y el nombre del mes. Debes usar un vector. Para
//simplificarlo vamos a suponer que febrero tiene 28 días.

#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> nombresMeses = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                                             "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    std::vector<int> diasMeses = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int numeroMes;
    std::cout << "Ingrese un número de mes (1-12): ";
    std::cin >> numeroMes;

    if (numeroMes >= 1 && numeroMes <= 12) {
        int dias = diasMeses[numeroMes - 1];
        std::string nombreMes = nombresMeses[numeroMes - 1];
        std::cout << "El mes " << numeroMes << " (" << nombreMes << ") tiene " << dias << " días." << std::endl;
    } else {
        std::cout << "Número de mes inválido." << std::endl;
    }

    return 0;
}
