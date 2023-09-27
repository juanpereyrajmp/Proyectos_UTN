#ifndef VIAJE_H
#define VIAJE_H

#include "Fecha.h"

class Viaje{
public:
    int getNumeroViaje();
    int getNumeroTarjeta();
    int getMedioTransporte();
    Fecha getFechaViaje();
    float getImporte();
    bool getEstado();

    void setNumeroViaje(int numeroViaje);
    void setNumeroTarjeta(int numeroTarjeta);
    void setMedioTransporte(int medioTransporte);
    void setFechaViaje(Fecha fechaViaje);
    void setImporte(float importe);
    void setEstado(bool estado);

    void cargar();
    void mostrar();

    Viaje();
    ~Viaje();

private:
    int _numeroViaje;
    int _numeroTarjeta;
    int _medioTransporte;
    Fecha _fechaViaje;
    float _importe;
    bool _estado;
};

#endif // VIAJE_H
