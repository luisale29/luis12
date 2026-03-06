#include <iostream>
using namespace std;

class Estudiante {
private:
    string nombre;
    string matricula;
    float promedio;

public:
    Estudiante(string nombre, string matricula, float promedio) {
        this->nombre = nombre;
        this->matricula = matricula;
        this->promedio = promedio;
    }

    void mostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Matricula: " << matricula << endl;
        cout << "Promedio: " << promedio << endl;
    }

    bool aprobo() {
        return promedio >= 70;
    }
};

int main() {

    Estudiante e1("Luis", "123", 80);
    Estudiante e2("Ana", "456", 60);

    e1.mostrarDatos();
    if (e1.aprobo())
        cout << "Aprobo" << endl;
    else
        cout << "No aprobo" << endl;

    cout << endl;

    e2.mostrarDatos();
    if (e2.aprobo())
        cout << "Aprobo" << endl;
    else
        cout << "No aprobo" << endl;

    return 0;
}