#ifndef TARJETA_H
#define TARJETA_H

#include "Fecha.h"

class Tarjeta{
public:
    int getNumeroTarjeta();
    Fecha getFechaAlta();
    long getDni();
    float getSaldo();
    bool getEstado();

    void setNumeroTarjeta(int numeroTarjeta);
    void setFechaAlta(Fecha fechaAlta);
    void setDni(long dni);
    void setSaldo(float saldo);
    void setEstado(bool estado);

    void cargar();
    void mostrar();

    Tarjeta();
    ~Tarjeta();

private:
    int _numeroTarjeta;
    Fecha _fechaAlta;
    long _dni;
    float _saldo;
    bool _estado;
};

#endif // TARJETA_H
