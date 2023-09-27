#include<iostream>
using namespace std;

#include "Tarjeta.h"

int Tarjeta::getNumeroTarjeta(){
    return _numeroTarjeta;
}
Fecha Tarjeta::getFechaAlta(){
    return _fechaAlta;
}
long Tarjeta::getDni(){
    return _dni;
}
float Tarjeta::getSaldo(){
    return _saldo;
}
bool Tarjeta::getEstado(){
    return _estado;
}

void Tarjeta::setNumeroTarjeta(int numeroTarjeta){
    _numeroTarjeta = numeroTarjeta;
}
void Tarjeta::setFechaAlta(Fecha fechaAlta){
    _fechaAlta = fechaAlta;
}
void Tarjeta::setDni(long dni){
    _dni = dni;
}
void Tarjeta::setSaldo(float saldo){
    _saldo = saldo;
}
void Tarjeta::setEstado(bool estado){
    _estado = estado;
}

void Tarjeta::cargar(){
    cout << "Numero de tarjeta: ";
    cin >> _numeroTarjeta;
    cout << "Fecha de Alta" << endl;
    _fechaAlta.Cargar();
    cout << "DNI: ";
    cin >> _dni;
    cout << "Saldo: ";
    cin >> _saldo;
    _estado = 1;
}
void Tarjeta::mostrar(){
    cout << "Numero de tarjeta: " << _numeroTarjeta << endl;
    cout << "Fecha de Alta" << endl;
    _fechaAlta.Mostrar();
    cout << "DNI: " << _dni << endl;
    cout << "Saldo: " << _saldo << endl;
}

Tarjeta::Tarjeta(){
    setNumeroTarjeta(0);
    setFechaAlta(_fechaAlta);
    setDni(00000000);
    setSaldo(0);
    setEstado(0);
}
Tarjeta::~Tarjeta(){

}
