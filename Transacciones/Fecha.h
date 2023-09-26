#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#pragma once

class Fecha{
public:
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);

    int getDia();
    int getMes();
    int getAnio();

    void Cargar();
    void Mostrar();

    Fecha();
    Fecha(int dia, int mes, int anio);

private:
    int _dia;
    int _mes;
    int _anio;
};



#endif // FECHA_H_INCLUDED
