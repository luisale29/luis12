#include "Pacman.h"

Pacman::Pacman(int x, int y) {
    this->x = x;
    this->y = y;
    puntos = 0;
    cout << "Pacman creado en posicion (" << x << "," << y << ")\n";
}

void Pacman::mostrar() {
    cout << "Posicion: (" << x << "," << y << ") | Puntos: " << puntos << endl;
}


void Pacman::mover() {
    x++;
    cout << "Movimiento por defecto\n";
}


void Pacman::mover(char direccion) {
    if (direccion == 'w') y--;
    else if (direccion == 's') y++;
    else if (direccion == 'a') x--;
    else if (direccion == 'd') x++;

    cout << "Movimiento con direccion\n";
}


void Pacman::mover(int pasos) {
    x += pasos;
    cout << "Movimiento multiple\n";
}


Pacman Pacman::operator+(int p) {
    Pacman temp = *this;
    temp.puntos += p;
    return temp;
}


void Pacman::operator+=(int p) {
    puntos += p;
}