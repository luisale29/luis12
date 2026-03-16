#include <iostream>
#include "Estudiante.h"

using namespace std;

int main() {

    Estudiante estudiante;

    int opcion;
    string nombre, matricula;
    float calificacion;

    do {

        cout << "\nMENU\n";
        cout << "1. Registrar estudiante\n";
        cout << "2. Modificar calificacion\n";
        cout << "3. Mostrar informacion\n";
        cout << "4. Calcular estado\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {

            case 1:

                cout << "Ingrese nombre: ";
                cin >> nombre;

                cout << "Ingrese matricula: ";
                cin >> matricula;

                cout << "Ingrese calificacion: ";
                cin >> calificacion;

                estudiante.registrarDatos(nombre, matricula, calificacion);

                break;

            case 2:

                cout << "Ingrese nueva calificacion: ";
                cin >> calificacion;

                estudiante.modificarCalificacion(calificacion);

                break;

            case 3:

                estudiante.mostrarInformacion();

                break;

            case 4:

                cout << "Estado del estudiante: "
                     << estudiante.calcularEstado() << endl;

                break;

        }

    } while(opcion != 5);

    return 0;
}