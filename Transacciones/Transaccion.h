#ifndef TRANSACCION_H
#define TRANSACCION_H
#include "Fecha.h"

class Transaccion{
public:
    int getIdTransaccion();
    std::string getDescripcion();
    Fecha getFechaTransaccion();
    int getIdCategoria();
    float getImporte();
    bool getEstado();

    void setIdTransaccion(int idTransaccion);
    void setDescripcion(std::string descripcion);
    void setFechaTransaccion(Fecha fechaTransaccion);
    void setIdCategoria(int idCategoria);
    void setImporte(float importe);
    void setEstado(bool estado);

    void cargar();
    void mostrar();

    Transaccion();
    ~Transaccion();

private:
    int _idTransaccion;
    std::string _descripcion;
    Fecha _fechaTransaccion;
    int _idCategoria;
    float _importe;
    bool _estado;
};

#endif // TRANSACCION_H
