#include<iostream>
#include<cstring>
using namespace std;
#include "Transaccion.h"

int Transaccion::getIdTransaccion(){
    return _idTransaccion;
}
string Transaccion::getDescripcion(){
    return _descripcion;
}
Fecha Transaccion::getFechaTransaccion(){
    return _fechaTransaccion;
}
int Transaccion::getIdCategoria(){
    return _idCategoria;
}
float Transaccion::getImporte(){
    return _importe;
}
bool Transaccion::getEstado(){
    return _estado;
}

void Transaccion::setIdTransaccion(int idTransaccion){
    _idTransaccion = idTransaccion;
}
void Transaccion::setDescripcion(string descripcion){
    _descripcion = descripcion;
}
void Transaccion::setFechaTransaccion(Fecha fechaTransaccion){
    _fechaTransaccion = fechaTransaccion;
}
void Transaccion::setIdCategoria(int idCategoria){
    _idCategoria = idCategoria;
}
void Transaccion::setImporte(float importe){
    _importe = importe;
}
void Transaccion::setEstado(bool estado){
    _estado = estado;
}

void Transaccion::cargar(){
    cout << "ID transaccion: ";
    cin >> _idTransaccion;
    cout << "Descripcion: ";
    cin.ignore();
    getline(cin,_descripcion);
    cout << "Fecha transaccion" << endl;
    _fechaTransaccion.Cargar();
    cout << "ID categoria: ";
    cin >> _idCategoria;
    cout << "Importe: ";
    cin >> _importe;
    cout << "Estado: ";
    cin >> _estado;
}
void Transaccion::mostrar(){
    cout << "ID transaccion: " << _idTransaccion << endl;
    cout << "Descripcion: " << _descripcion << endl;
    cout << "Fecha transaccion" << endl;
    _fechaTransaccion.Mostrar();
    cout << "ID categoria: " << _idCategoria << endl;
    cout << "Importe: " << _importe << endl;
    cout << "Estado: " << _estado << endl;
}

Transaccion::Transaccion(){
    setIdTransaccion(0);
    setDescripcion("");
    setFechaTransaccion(Fecha(0,0,0));
    setIdCategoria(0);
    setImporte(0);
    setEstado(0);
}
Transaccion::~Transaccion(){

}
