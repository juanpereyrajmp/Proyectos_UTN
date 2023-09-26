#include<iostream>
using namespace std;
#include "Ingreso.h"

int Ingreso::getTipoIngreso(){
    return _tipoIngreso;
}
std::string Ingreso::getReferencia(){
    return _referencia;
}

void Ingreso::setTipoIngreso(int tipoIngreso){
    _tipoIngreso = tipoIngreso;
}
void Ingreso::setReferencia(std::string referencia){
    _referencia = referencia;
}

void Ingreso::cargar(){
    Transaccion::cargar();
    cout << "Tipo de ingreso: ";
    cin >> _tipoIngreso;
    cout << "Referencia: ";
    cin.ignore();
    getline(cin,_referencia);
}
void Ingreso::mostrar(){
    Transaccion::mostrar();
    cout << "Tipo de ingreso: " << _tipoIngreso << endl;
    cout << "Referencia: " << _referencia << endl;
}

Ingreso::Ingreso(){
    setTipoIngreso(0);
    setReferencia("");
}
Ingreso::~Ingreso(){

}
