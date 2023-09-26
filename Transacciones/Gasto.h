#ifndef GASTO_H
#define GASTO_H
#include "Transaccion.h"

class Gasto:public Transaccion{
public:
    int getIdMetodoPago();
    std::string getEstablecimiento();

    void setIdMetodoPago(int idMetodoPago);
    void setEstablecimiento(std::string establecimiento);

    void cargar();
    void mostrar();

    Gasto();
    ~Gasto();

private:
    int _idMetodoPago;
    std::string _establecimiento;
};

#endif // GASTO_H
