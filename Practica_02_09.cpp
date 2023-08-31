// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 9
// Problema planteado: Un arreglo contiene las calificaciones de un examen dado por un grupo de estudiantes, otro
//arreglo contiene los nombres de los mismos y un tercer arreglo contiene la sigla de la carrera.
//Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor y el
//nombre del alumno que obtuvo la nota menor, además mostrar que carrera tuvo un
//desempeño mayor con relación al promedio del curso.

#include <iostream>
#include <vector>
#include <string>

int main() {
    const int numEstudiantes = 5; 
    std::vector<std::string> nombres = {"Sofia", "Marío", "Henry", "Rodrigo", "Willy"};
    std::vector<double> calificaciones = {85.5, 92.0, 78.5, 65.0, 90.5};
    std::vector<std::string> carreras = {"Ing", "Med", "Ing", "Econ", "Ing"};

    double sumaCalificaciones = 0.0;
    double promedio = 0.0;
    double maxCalificacion = calificaciones[0];
    double minCalificacion = calificaciones[0];
    int posMax = 0;
    int posMin = 0;

    // Calcular el promedio y encontrar la calificación máxima y mínima
    for (int i = 0; i < numEstudiantes; i++) {
        sumaCalificaciones += calificaciones[i];

        if (calificaciones[i] > maxCalificacion) {
            maxCalificacion = calificaciones[i];
            posMax = i;
        }

        if (calificaciones[i] < minCalificacion) {
            minCalificacion = calificaciones[i];
            posMin = i;
        }
    }

    promedio = sumaCalificaciones / numEstudiantes;

  
    std::string mejorCarrera;
    double mejorPromedioCarrera = 0.0;

    for (int i = 0; i < numEstudiantes; i++) {
        if (calificaciones[i] > promedio) {
            if (calificaciones[i] > mejorPromedioCarrera) {
                mejorPromedioCarrera = calificaciones[i];
                mejorCarrera = carreras[i];
            }
        }
    }

    std::cout << "Alumno con la mayor calificación: " << nombres[posMax] << std::endl;
    std::cout << "Alumno con la menor calificación: " << nombres[posMin] << std::endl;
    std::cout << "Carrera con un desempeño mayor al promedio: " << mejorCarrera << std::endl;

    return 0;
}

