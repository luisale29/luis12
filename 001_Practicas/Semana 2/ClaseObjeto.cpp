#include "ClaseObjeto.h"
#include <iostream>

using namespace std;

Ventilador::Ventilador(string col, int VelocidadMaxima){

color = col;

 this->VelocidadMaxima = VelocidadMaxima;

 
 VelocidadActual = 0;

 encendido = true;

}

void Ventilador::apagar() {
    encendido = false;
    VelocidadActual = 0;
}
void Ventilador::subirVelocidad() {
if (!encendido) {
    cout << "No se puede subir la velocidad: el ventilador esta apagado." << endl;
    return;
}


    if (VelocidadActual < VelocidadMaxima) {
        VelocidadActual++;
    } else {
        cout << "Velocidad maxima alcanzada.\n";
    }
}

void Ventilador::bajarVelocidad() {
    if (VelocidadActual > 0) {
        VelocidadActual--;
    } else {
        cout << "La velocidad ya es 0.\n";
    }

}

void Ventilador::encender() {
    encendido = true;
    cout << "El ventilador se ha encendido." << endl;
}


void Ventilador::mostrarEstado() {
    cout << "Color: " << color << endl;
    cout << "Estado: " << (encendido ?"Encendido" : "Apagado") << endl;
    cout << "Velocidad: " << VelocidadActual << "/" << VelocidadMaxima << endl;
    cout << "-----------------------------\n";
}
 


 






