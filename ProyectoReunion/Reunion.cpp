#include<iostream>
using namespace std;

#include "Reunion.h"

void Reunion::setFecha(date fecha){
    _fecha = fecha;
}
void Reunion::setHorario(timeClass horario){
    _horario = horario;
}
void Reunion::setLugar(std::string lugar){
    _lugar = lugar;
}
void Reunion::setTema(std::string tema){
    _tema = tema;
}
void Reunion::setDuracion(int duracion){
    _duracion = duracion;
}
void Reunion::setIntegrantes(person integrantes, int indice){
    _integrantes[indice] = integrantes;
}

date Reunion::getFecha(){
    return _fecha;
}
timeClass Reunion::getHorario(){
    return _horario;
}
std::string Reunion::getLugar(){
    return _lugar;
}
std::string Reunion::getTema(){
    return _tema;
}
int Reunion::getDuracion(){
    return _duracion;
}
int Reunion::getCantidadIntegrantes(){
    return _cantidadIntegrantes;
}
person Reunion::getIntegrante(int indice){
    return _integrantes[indice];
}

std::string Reunion::toString(){
    std::string aux = _fecha.toString();
    aux += "," + _horario.toString();
    aux += "," + getLugar();
    aux += "," + getTema();
    aux += "," + std::to_string(_duracion);
    //TODO: Concatenar los integrantes
    for(int i=0; i<_cantidadIntegrantes; i++){
        aux += "," + _integrantes[i].getLastName();
        aux += "," + _integrantes[i].getFirstName();
    }
    return aux;
}

void Reunion::Cargar(){
    cout << "Fecha: ";
    _fecha.Cargar();
    cout << "Horario: ";
    _horario.Cargar();
    cout << "Lugar: ";
    cin >> _lugar;
    cout << "Tema: ";
    cin >> _tema;
    cout << "Duracion: ";
    cin >> _duracion;
}
void Reunion::CargarIntegrantes(int cantidadIntegrantes){
    for (int i=0;i<cantidadIntegrantes;i++){
        _integrantes[i].Cargar();
    }
}
void Reunion::Mostrar(){
    cout << "Fecha: ";
    _fecha.Mostrar();
    cout << "Horario: ";
    _horario.Mostrar();
    cout << "Lugar: " << _lugar << endl;
    cout << "Tema: " << _tema << endl;
    cout << "Duracion: " << _duracion << endl;
}
void Reunion::MostrarIntegrantes(int cantidadIntegrantes){
    for (int i=0;i<cantidadIntegrantes;i++){
        cout << "Integrante #" << i+1 << ": ";
        _integrantes[i].Mostrar();
        cout << endl;
    }
}

Reunion::Reunion(int cantidadIntegrantes){
    if (cantidadIntegrantes > 0){
        _integrantes = nullptr;
        _integrantes = new person[cantidadIntegrantes];
        if (_integrantes == nullptr){
            _cantidadIntegrantes = 0;
        }
        else{
            _cantidadIntegrantes = cantidadIntegrantes;
        }
    }
    else{
        _cantidadIntegrantes = 0;
    }

    _duracion = 0;
    _tema = "";
    _lugar = "";

}

Reunion::~Reunion(){
    if(_cantidadIntegrantes > 0){
        delete []_integrantes;
    }
}
