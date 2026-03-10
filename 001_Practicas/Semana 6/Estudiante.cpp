#include <iostream>
#include "Estudiante.h"

using namespace std;

Estudiante::Estudiante(string nombre, string matricula, float promedio) {
    this->nombre = nombre;
    this->matricula = matricula;
    this->promedio = promedio;
}

void Estudiante::mostrarDatos() {
    cout << "Nombre: " << nombre << endl;
    cout << "Matricula: " << matricula << endl;
    cout << "Promedio: " << promedio << endl;
}

bool Estudiante::aprobo() {
    return promedio >= 70;
}