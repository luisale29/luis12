#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
using namespace std;


class Empleado{
protected:
    string nombre;
    int edad;
    double salario;
public:
    Empleado(string, int, double);
    virtual double calcular();
    virtual void mostrar();
};


class TiempoCompleto : public Empleado{
    double bono;
public:
    TiempoCompleto(string, int, double, double);
    double calcular() override;
};

class PorHoras : public Empleado{
    int horas; double pago;
public:
    PorHoras(string, int, int, double);
    double calcular() override;
};


class Prestaciones{
protected:
    string seguro;
public:
    Prestaciones(string);
    void mostrarPrest();
};


class CompletoPrest : public TiempoCompleto, public Prestaciones{
public:
    CompletoPrest(string,int,double,double,string);
    void mostrar();
};

#endif