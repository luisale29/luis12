#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
using namespace std;

class Estudiante {

private:
    string nombre;
    string matricula;
    float calificacion;

public:
    void registrarDatos(string n, string m, float c);
    void modificarCalificacion(float nuevaCalificacion);
    void mostrarInformacion();
    string calcularEstado();

};

#endif