#include<iostream>
using namespace std;
#include "Gasto.h"

int Gasto::getIdMetodoPago(){
    return _idMetodoPago;
}
std::string Gasto::getEstablecimiento(){
    return _establecimiento;
}

void Gasto::setIdMetodoPago(int idMetodoPago){
    _idMetodoPago = idMetodoPago;
}
void Gasto::setEstablecimiento(std::string establecimiento){
    _establecimiento = establecimiento;
}

void Gasto::cargar(){
    Transaccion::cargar();
    cout << "ID metodo de pago: ";
    cin >> _idMetodoPago;
    cout << "Establecimiento: ";
    cin.ignore();
    getline(cin,_establecimiento);
}
void Gasto::mostrar(){
    Transaccion::mostrar();
    cout << "ID metodo de pago: " << _idMetodoPago << endl;
    cout << "Establecimiento: " << _establecimiento << endl;
}

Gasto::Gasto(){
    setIdMetodoPago(0);
    setEstablecimiento("");
}
Gasto::~Gasto(){

}
