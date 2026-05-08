#include <iostream>
#include <vector>
#include "Personaje.h"

using namespace std;

int main() {
    vector<Personaje*> personajes;

   
    personajes.push_back(new Guerrero("Thor", 10, 100));
    personajes.push_back(new Mago("Merlin", 8, 80));
    personajes.push_back(new Arquero("Legolas", 9, 90));

    cout << "=== PERSONAJES ===" << endl;

    for (int i = 0; i < personajes.size(); i++) {
        personajes[i]->mostrarInfo();
        cout << "------------------" << endl;
    }

    cout << "\n=== ATAQUES ===" << endl;

    for (int i = 0; i < personajes.size(); i++) {
        personajes[i]->atacar(); // 🔥 POLIMORFISMO
    }

    for (int i = 0; i < personajes.size(); i++) {
        delete personajes[i];
    }

    return 0;
}