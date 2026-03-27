#include "Producto.h"


Producto::Producto(string n, float p) {
    nombre = n;
    precio = p;
    cout << "Producto creado correctamente" << endl;
}


Producto::~Producto() {
    cout << "Producto destruido" << endl;
}


void Producto::mostrar() {
    cout << "Nombre: " << nombre << endl;
    cout << "Precio: " << precio << endl;
}


void Producto::modificar(float nuevoPrecio) {
    precio = nuevoPrecio;
    cout << "Precio actualizado" << endl;
}