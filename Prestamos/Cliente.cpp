#include<iostream>
using namespace std;
#include "CargarCadena.h"
#include "Cliente.h"


void Cliente::setId(int id){
    _id = id;
}
void Cliente::setNombre(const char *nombre){
    strcpy(_nombre,nombre);
}
void Cliente::setApellido(const char *apellido){
    strcpy(_apellido,apellido);
}
void Cliente::setDireccion(Direccion direccion){
    _direccion = direccion;
}
void Cliente::setTelefono(const char *telefono){
    strcpy(_telefono,telefono);
}
void Cliente::setEstado(bool estado){
    _estado = estado;
}

int Cliente::getId(){
    return _id;
}
const char *Cliente::getNombre(){
    return _nombre;
}
const char *Cliente::getApellido(){
    return _apellido;
}
Direccion Cliente::getDireccion(){
    return _direccion;
}
const char *Cliente::getTelefono(){
    return _telefono;
}
bool Cliente::getEstado(){
    return _estado;
}

void Cliente::Cargar(){
    cout << "ID cliente: ";
    cin >> _id;
    cout << "Nombre: ";
    cargarCadena(_nombre,29);
    cout << "Apellido: ";
    cargarCadena(_apellido,29);
    _direccion.Cargar();
    cout << "Telefono: ";
    cargarCadena(_telefono,29);
    _estado = 1;
}
void Cliente::Mostrar(){
    cout << "ID cliente: " << _id << endl;
    cout << "Nombre: " << _nombre << endl;
    cout << "Apellido: " << _apellido << endl;
    _direccion.Mostrar();
    cout << "Telefono: " << _telefono << endl;
}

Cliente::Cliente(){
    setId(0);
    setNombre("");
    setApellido("");
    setDireccion(_direccion);
    setTelefono("");
}
