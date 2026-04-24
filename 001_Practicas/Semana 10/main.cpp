#include "Empleado.h"

int main(){

    Empleado e("Luis",20,5000);
    TiempoCompleto t("Ana",30,8000,2000);
    PorHoras h("Carlos",25,40,100);
    CompletoPrest c("Maria",28,9000,1500,"IMSS");

    e.mostrar();
    t.mostrar();
    h.mostrar();

    cout<<"--- Con prestaciones ---"<<endl;
    c.mostrar();

    return 0;
}