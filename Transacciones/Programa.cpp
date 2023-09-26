#include<iostream>
using namespace std;

#include "Programa.h"

Ingreso Programa::getIngresos(Ingreso *ingresos, int indice){
    return _ingresos[indice];
}
Gasto Programa::getGastos(Gasto *gastos, int indice){
    return _gastos[indice];
}

void Programa::setIngresos(Ingreso *vecIngresos, int tam){
    for (int i=0;i<tam;i++){
        cout << "Cargar ingreso #" << i+1 << endl;
        _ingresos[i].cargar();
        system("cls");
    }
}
void Programa::setGastos(Gasto *vecGastos, int tam){
    for (int i=0;i<tam;i++){
        cout << "Cargar gasto #" << i+1 << endl;
        _gastos[i].cargar();
        system("cls");
    }
}

void Programa::cargar(){
    setIngresos(_ingresos,5);
    setGastos(_gastos,5);
}

void Programa::mostrarGastos(){
    for (int i=0;i<5;i++){
        _gastos[i].mostrar();
    }
}
void Programa::mostrarIngresos(){
    for (int i=0;i<5;i++){
        _ingresos[i].mostrar();
    }
}

void Programa::listarGastosPorMes(int mes, int anio){
    for (int i=0;i<5;i++){
        Fecha fechaGasto = _gastos[i].getFechaTransaccion();
        if (fechaGasto.getMes() == mes && fechaGasto.getAnio() == anio){
            _gastos[i].mostrar();
            cout << endl;
        }
    }
}

void Programa::listarIngresoMasRedituable(){
    int mayorIngreso = 0;
    int indiceMayor;
    for (int i=0;i<5;i++){
        if(_ingresos[i].getImporte() > mayorIngreso){
            mayorIngreso = _ingresos[i].getImporte();
            indiceMayor = i;
        }
    }
    _ingresos[indiceMayor].mostrar();
}

void Programa::saldoFinal(){
    float saldoTotal = 0;
    for (int i=0;i<5;i++){
        saldoTotal += _ingresos[i].getImporte();
        saldoTotal -= _gastos[i].getImporte();
    }
    if (saldoTotal > 0){
        cout << "SUPERAVIT! El saldo final es " << saldoTotal << endl;
    }
    else if (saldoTotal < 0){
        cout << "DEFICIT! El saldo final es " << saldoTotal << endl;
    }
    else{
        cout << "PUNTO DE EQUILIBRIO! El saldo es exactamente 0" << endl;
    }
}

Programa::Programa(){

}
Programa::~Programa(){

}


