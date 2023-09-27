#include<iostream>
using namespace std;

#include "Viaje.h"

int Viaje::getNumeroViaje(){
    return _numeroViaje;
}
int Viaje::getNumeroTarjeta(){
    return _numeroTarjeta;
}
int Viaje::getMedioTransporte(){
    return _medioTransporte;
}
Fecha Viaje::getFechaViaje(){
    return _fechaViaje;
}
float Viaje::getImporte(){
    return _importe;
}
bool Viaje::getEstado(){
    return _estado;
}

void Viaje::setNumeroViaje(int numeroViaje){
    _numeroViaje = numeroViaje;
}
void Viaje::setNumeroTarjeta(int numeroTarjeta){
    _numeroTarjeta = numeroTarjeta;
}
void Viaje::setMedioTransporte(int medioTransporte){
    _medioTransporte = medioTransporte;
}
void Viaje::setFechaViaje(Fecha fechaViaje){
    _fechaViaje = fechaViaje;
}
void Viaje::setImporte(float importe){
    _importe = importe;
}
void Viaje::setEstado(bool estado){
    _estado = estado;
}

void Viaje::cargar(){
    cout << "Numero de Viaje: ";
    cin >> _numeroViaje;
    cout << "Numero de Tarjeta: ";
    cin >> _numeroTarjeta;
    cout << "Medio de transporte(1 - Colectivo, 2 - Subte, 3 - Tren): ";
    cin >> _medioTransporte;
    cout << "Fecha del Viaje" << endl;
    _fechaViaje.Cargar();
    cout << "Importe: ";
    cin >> _importe;
}
void Viaje::mostrar(){
    cout << "Numero de Viaje: " << _numeroViaje << endl;
    cout << "Numero de Tarjeta: " << _numeroTarjeta << endl;
    cout << "Medio de Transporte(1 - Colectivo, 2 - Subte, 3 - Tren): " << _medioTransporte << endl;
    cout << "Fecha del Viaje" << endl;
    _fechaViaje.Mostrar();
    cout << "Importe: " << _importe << endl;
}

Viaje::Viaje(){
    setNumeroViaje(0);
    setNumeroTarjeta(0);
    setMedioTransporte(1);
    setFechaViaje(_fechaViaje);
    setImporte(0);
    setEstado(0);
}
Viaje::~Viaje(){

}
