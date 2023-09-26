#include<iostream>
using namespace std;

#include "Prestamo.h"

void Prestamo::setId(int id){
    _id = id;
}
void Prestamo::setMontoDelPrestamo(float montoDelPrestamo){
    _montoDelPrestamo = montoDelPrestamo;
}
void Prestamo::setTasaDeInteres(float tasaDeInteres){
    _tasaDeInteres = tasaDeInteres;
}
void Prestamo::setPlazoEnMeses(int plazoEnMeses){
    _plazoEnMeses = plazoEnMeses;
}
void Prestamo::setClienteAsociado(int clienteAsociado){
    _clienteAsociado = clienteAsociado;
}
void Prestamo::setEstado(bool estado){
    _estado = estado;
}

int Prestamo::getId(){
    return _id;
}
float Prestamo::getMontoDelPrestamo(){
    return _montoDelPrestamo;
}
float Prestamo::getTasaDeInteres(){
    return _tasaDeInteres;
}
int Prestamo::getPlazoEnMeses(){
    return _plazoEnMeses;
}
int Prestamo::getClienteAsociado(){
    return _clienteAsociado;
}
bool Prestamo::getEstado(){
    return _estado;
}

void Prestamo::Cargar(){
    cout << "ID prestamo: ";
    cin >> _id;
    cout << "Monto del prestamo: ";
    cin >> _montoDelPrestamo;
    cout << "Tasa de interes: ";
    cin >> _tasaDeInteres;
    cout << "Plazo en meses: ";
    cin >> _plazoEnMeses;
    cout << "ID del cliente: ";
    cin >> _clienteAsociado;
    _estado = 1;
}
void Prestamo::Mostrar(){
    cout << "ID prestamo: " << _id << endl;
    cout << "Monto del prestamo: " << _montoDelPrestamo << endl;
    cout << "Tasa de interes: " << _tasaDeInteres << endl;
    cout << "Plazo en meses: " << _plazoEnMeses << endl;
    cout << "ID cliente asociado: " << _clienteAsociado << endl;
}

Prestamo::Prestamo(){
    setId(0);
    setMontoDelPrestamo(0);
    setTasaDeInteres(0);
    setPlazoEnMeses(0);
    setClienteAsociado(0);
}
