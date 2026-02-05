#ifndef CLASEOBJETO_H
#define CLASEOBJETO_H
#include <string>
using namespace std;

class Ventilador{

private:
    string color;          
    bool encencido;
    int VelocidadActual;
    int VelocidadMaxima;



public:
    
    Ventilador(string col, int VelocidadMaxima);

    void encender();
    void apagar();
    void subirVelocidad();
    void bajarVelocidad();
    void mostrarEstado();       
};

#endif

