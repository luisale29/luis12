#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
using namespace std;


class Personaje {
protected:
    string nombre;
    int nivel;
    int vida;

public:
    Personaje(string n, int niv, int v);

    void mostrarInfo();

    virtual void atacar();
};


class Guerrero : public Personaje {
public:
    Guerrero(string n, int niv, int v);
    void atacar() override;
};

class Mago : public Personaje {
public:
    Mago(string n, int niv, int v);
    void atacar() override;
};

class Arquero : public Personaje {
public:
    Arquero(string n, int niv, int v);
    void atacar() override;
};

#endif