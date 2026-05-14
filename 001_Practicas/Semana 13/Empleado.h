#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
#include <string>

using namespace std;

// Interfaz
class IResponsable {
public:
    virtual void generarReporte() = 0;
};


class Empleado {
protected:
    string nombre;
    int edad;
    float salario;

public:
    Empleado(string n, int e, float s) {
        nombre = n;
        edad = e;
        salario = s;
    }

    virtual void mostrarInformacion() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Salario: $" << salario << endl;
    }

    virtual void trabajar() = 0;

    virtual void realizarActividad() {
        cout << nombre << " esta realizando una actividad." << endl;
    }

    virtual ~Empleado() {}
};

#endif