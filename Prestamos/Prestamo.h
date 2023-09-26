#ifndef PRESTAMO_H
#define PRESTAMO_H
#include "Cliente.h"
#pragma once

class Prestamo{
public:
    void setId(int id);
    void setMontoDelPrestamo(float montoDelPrestamo);
    void setTasaDeInteres(float tasaDeInteres);
    void setPlazoEnMeses(int plazoEnMeses);
    void setClienteAsociado(int clienteAsociado);
    void setEstado(bool estado);

    int getId();
    float getMontoDelPrestamo();
    float getTasaDeInteres();
    int getPlazoEnMeses();
    int getClienteAsociado();
    bool getEstado();

    void Cargar();
    void Mostrar();

    Prestamo();

private:
    int _id;
    float _montoDelPrestamo;
    float _tasaDeInteres;
    int _plazoEnMeses;
    int _clienteAsociado;
    bool _estado;
};

#endif // PRESTAMO_H
