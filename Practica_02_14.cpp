// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 14
// Problema planteado: Un arreglo contiene números al azar entre N y M, crear un segundo arreglo que contenga
//los números capicúa contenidos en el primero.

#include <iostream>
#include <vector>

bool esCapicua(int num) {
    int original = num;
    int reverso = 0;
    
    while (num > 0) {
        int digito = num % 10;
        reverso = reverso * 10 + digito;
        num /= 10;
    }
    
    return original == reverso;
}

int main() {
    int N, M;
    std::cout << "Ingrese los valores N y M (rango): ";
    std::cin >> N >> M;

    std::vector<int> numerosCapicua;

    for (int num = N; num <= M; num++) {
        if (esCapicua(num)) {
            numerosCapicua.push_back(num);
        }
    }

    std::cout << "Los números capicúa entre " << N << " y " << M << " son: ";
    for (int capicua : numerosCapicua) {
        std::cout << capicua << " ";
    }
    std::cout << std::endl;

    return 0;
}
