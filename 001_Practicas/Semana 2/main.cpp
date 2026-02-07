#include <iostream>
#include "Claseobjeto.h"

using namespace std;

int main() {

  
    Ventilador ventilador1("Blanco", 3);
    Ventilador ventilador2("Negro", 5);

  
    ventilador1.encender();
    ventilador1.subirVelocidad();
    ventilador1.subirVelocidad();

    
    ventilador2.subirVelocidad();
    ventilador2.encender();
    ventilador2.subirVelocidad();
    ventilador2.subirVelocidad();
    ventilador2.subirVelocidad();

    
    cout << "Estado del ventilador 1:\n";
    ventilador1.mostrarEstado();

    cout << "Estado del ventilador 2:\n";
    ventilador2.mostrarEstado();

    

    return 0;
}