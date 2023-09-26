#include <iostream>
#include "reunion.h"


using namespace std;

int main(){

    date hoy;
    timeClass hora;
    person yo("Juan","Pereyra"), juli("Julian", "Pezzarini"), seba("Sebastian","Forrester");
    reunion reunionName(3);

    reunionName.setDate(hoy);
    reunionName.setTime(hora);
    reunionName.setPlace("Radical Sports");
    reunionName.setSubject("Indumentaria Head");
    reunionName.setDuration(30);
    reunionName.setPerson(yo,0);
    reunionName.setPerson(juli,1);
    reunionName.setPerson(seba,2);

    cout << reunionName.getPerson(2).toString();
    cout << reunionName.getDate().toString();


    return 0;
}
