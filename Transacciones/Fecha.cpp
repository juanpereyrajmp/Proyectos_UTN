#include<iostream>
using namespace std;
#include "Fecha.h"

void Fecha::setDia(int dia){
    _dia = dia;
}
void Fecha::setMes(int mes){
    _mes = mes;
}
void Fecha::setAnio(int anio){
    _anio = anio;
}

int Fecha::getDia(){
    return _dia;
}
int Fecha::getMes(){
    return _mes;
}
int Fecha::getAnio(){
    return _anio;
}

void Fecha::Cargar(){
    cout << "Dia: ";
    cin >> _dia;
    cout << "Mes: ";
    cin >> _mes;
    cout << "Anio: ";
    cin >> _anio;
}
void Fecha::Mostrar(){
    cout << "Dia: " << _dia << endl;
    cout << "Mes: " << _mes << endl;
    cout << "Anio: " << _anio << endl;
}

Fecha::Fecha(){
    setDia(0);
    setMes(0);
    setAnio(0);
}
Fecha::Fecha(int dia, int mes, int anio){
    setDia(dia);
    setMes(mes);
    setAnio(anio);
}
