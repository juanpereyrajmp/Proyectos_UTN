#ifndef INGRESO_H
#define INGRESO_H
#include "Transaccion.h"

class Ingreso:public Transaccion{
public:
    int getTipoIngreso();
    std::string getReferencia();

    void setTipoIngreso(int tipoIngreso);
    void setReferencia(std::string referencia);

    void cargar();
    void mostrar();

    Ingreso();
    ~Ingreso();

private:
    int _tipoIngreso;
    std::string _referencia;
};

#endif // INGRESO_H
