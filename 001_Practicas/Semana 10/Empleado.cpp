#include "Empleado.h"

Empleado::Empleado(string n,int e,double s){
    nombre=n; edad=e; salario=s;
}
double Empleado::calcular(){ return salario; }

void Empleado::mostrar(){
    cout<<nombre<<" Edad:"<<edad<<" Salario:"<<calcular()<<endl;
}


TiempoCompleto::TiempoCompleto(string n,int e,double s,double b)
: Empleado(n,e,s){ bono=b; }

double TiempoCompleto::calcular(){
    return salario+bono;
}


PorHoras::PorHoras(string n,int e,int h,double p)
: Empleado(n,e,0){ horas=h; pago=p; }

double PorHoras::calcular(){
    return horas*pago;
}


Prestaciones::Prestaciones(string s){ seguro=s; }

void Prestaciones::mostrarPrest(){
    cout<<"Seguro:"<<seguro<<endl;
}

CompletoPrest::CompletoPrest(string n,int e,double s,double b,string seg)
: TiempoCompleto(n,e,s,b), Prestaciones(seg){}

void CompletoPrest::mostrar(){
    TiempoCompleto::mostrar();
    mostrarPrest();
}