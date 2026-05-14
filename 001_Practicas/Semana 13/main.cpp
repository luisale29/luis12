#include <iostream>
#include <vector>
#include "Empleado.cpp"

using namespace std;

int main() {

    vector<Empleado*> empleados;

    empleados.push_back(new Programador("Luis", 19, 12000));
    empleados.push_back(new AdministradorRed("Carlos", 30, 15000));
    empleados.push_back(new SoporteTecnico("Ana", 25, 10000));

    cout << "=== SISTEMA DE EMPLEADOS ===" << endl;

    for (Empleado* empleado : empleados) {

        empleado->mostrarInformacion();
        empleado->trabajar();
        empleado->realizarActividad();

        IResponsable* responsable =
            dynamic_cast<IResponsable*>(empleado);

        if (responsable != nullptr) {
            responsable->generarReporte();
        }

        cout << "------------------------" << endl;
    }

    for (Empleado* empleado : empleados) {
        delete empleado;
    }

    return 0;
}