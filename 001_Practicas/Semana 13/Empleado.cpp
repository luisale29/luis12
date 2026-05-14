#include "Empleado.h"

class Programador : public Empleado, public IResponsable {
public:
    Programador(string n, int e, float s)
        : Empleado(n, e, s) {}

    void trabajar() override {
        cout << nombre << " esta desarrollando codigo." << endl;
    }

    void generarReporte() override {
        cout << "Reporte: avances del sistema generados." << endl;
    }
};


class AdministradorRed : public Empleado, public IResponsable {
public:
    AdministradorRed(string n, int e, float s)
        : Empleado(n, e, s) {}

    void trabajar() override {
        cout << nombre << " esta monitoreando servidores y red." << endl;
    }

    void generarReporte() override {
        cout << "Reporte: estado de la red generado." << endl;
    }
};


class SoporteTecnico : public Empleado, public IResponsable {
public:
    SoporteTecnico(string n, int e, float s)
        : Empleado(n, e, s) {}

    void trabajar() override {
        cout << nombre << " esta atendiendo incidencias." << endl;
    }

    void generarReporte() override {
        cout << "Reporte: tickets atendidos generados." << endl;
    }
};