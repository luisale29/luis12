#include "Producto.h"

int main() {
    string nombre;
    float precio;
    int opcion;

    cout << "Ingresa el nombre del producto: ";
    cin >> nombre;

    cout << "Ingresa el precio: ";
    cin >> precio;

    Producto p(nombre, precio);

    do {
        cout << "\n1. Mostrar producto";
        cout << "\n2. Modificar precio";
        cout << "\n3. Salir";
        cout << "\nOpcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                p.mostrar();
                break;
            case 2:
                cout << "Nuevo precio: ";
                cin >> precio;
                p.modificar(precio);
                break;
        }

    } while(opcion != 3);

    return 0; 
}