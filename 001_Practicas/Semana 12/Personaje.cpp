#include "Personaje.h"



Personaje::Personaje(string n, int niv, int v) {
    nombre = n;
    nivel = niv;
    vida = v;
}

void Personaje::mostrarInfo() {
    cout << "Nombre: " << nombre << endl;
    cout << "Nivel: " << nivel << endl;
    cout << "Vida: " << vida << endl;
}

void Personaje::atacar() {
    cout << nombre << " hace un ataque basico." << endl;
}



Guerrero::Guerrero(string n, int niv, int v)
    : Personaje(n, niv, v) {}

void Guerrero::atacar() {
    cout << nombre << " lanza un ATAQUE FUERTE con espada." << endl;
}



Mago::Mago(string n, int niv, int v)
    : Personaje(n, niv, v) {}

void Mago::atacar() {
    cout << nombre << " usa un HECHIZO MAGICO." << endl;
}



Arquero::Arquero(string n, int niv, int v)
    : Personaje(n, niv, v) {}

void Arquero::atacar() {
    cout << nombre << " dispara una FLECHA." << endl;
}