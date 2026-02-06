#ifndef CLASEOBJETO_H
#define CLASEOBJETO_H
#include <string>
using namespace std;

class Ventilador{

private:
    string color;          
    bool encendido;
    int VelocidadActual;
    int VelocidadMaxima;



public:
    
    Ventilador(string col, int VelocidadMax);

    void encender();
    void apagar();
    void subirVelocidad();
    void bajarVelocidad();
    void mostrarEstado();       
};

#endif

