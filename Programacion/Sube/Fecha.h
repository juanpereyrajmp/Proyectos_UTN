#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#pragma once

class Fecha{
    public:
        void setDia(int dia){
            _dia = dia;
        }
        void setMes(int mes){
            _mes = mes;
        }
        void setAnio(int anio){
            _anio = anio;
        }

        int getDia(){
            return _dia;
        }
        int getMes(){
            return _mes;
        }
        int getAnio(){
            return _anio;
        }

        void Cargar(){
            cout << "Dia: ";
            cin >> _dia;
            cout << "Mes: ";
            cin >> _mes;
            cout << "Anio: ";
            cin >> _anio;
        }
        void Mostrar(){
            cout << "Dia: ";
            cout << _dia << endl;
            cout << "Mes: ";
            cout << _mes << endl;
            cout << "Anio: ";
            cout << _anio << endl;
        }

        Fecha(){
            _dia = 0;
            _mes = 0;
            _anio = 0;
        }
        Fecha(int dia, int mes, int anio){
            _dia = dia;
            _mes = mes;
            _anio = anio;
        }

    private:
        int _dia;
        int _mes;
        int _anio;
};



#endif // FECHA_H_INCLUDED
