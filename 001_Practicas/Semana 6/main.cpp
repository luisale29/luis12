#include <iostream>
#include "Estudiante.h"

using namespace std;

int main() {

    Estudiante e1("Luis", "123", 80);
    Estudiante e2("Ana", "456", 60);

    cout << "Estudiante 1" << endl;
    e1.mostrarDatos();
    if (e1.aprobo())
        cout << "Aprobo" << endl;
    else
        cout << "No aprobo" << endl;

    cout << endl;

    cout << "Estudiante 2" << endl;
    e2.mostrarDatos();
    if (e2.aprobo())
        cout << "Aprobo" << endl;
    else
        cout << "No aprobo" << endl;

    return 0;
}