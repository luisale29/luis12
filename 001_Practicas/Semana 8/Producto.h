#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
using namespace std;

class Producto {
private:
    string nombre;
    float precio;

public:
    // Constructor
    Producto(string n, float p);

    // Destructor
    ~Producto();

    // Métodos
    void mostrar();
    void modificar(float nuevoPrecio);
};

#endif