#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    string matricula;
    float promedio;

public:
    Estudiante(string nombre, string matricula, float promedio);

    void mostrarDatos();
    bool aprobo();
};

#endif