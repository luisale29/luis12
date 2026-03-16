#include <iostream>
#include "Estudiante.h"

using namespace std;

void Estudiante::registrarDatos(string n, string m, float c) {
    nombre = n;
    matricula = m;
    calificacion = c;
}

void Estudiante::modificarCalificacion(float nuevaCalificacion) {
    calificacion = nuevaCalificacion;
}

void Estudiante::mostrarInformacion() {
    cout << "Nombre: " << nombre << endl;
    cout << "Matricula: " << matricula << endl;
    cout << "Calificacion: " << calificacion << endl;
}

string Estudiante::calcularEstado() {

    if (calificacion >= 70) {
        return "Aprobado";
    } else {
        return "Reprobado";
    }

}