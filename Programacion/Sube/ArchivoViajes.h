#ifndef ARCHIVOVIAJES_H
#define ARCHIVOVIAJES_H

#include "Viaje.h"

class ArchivoViajes{
public:
    void abrirArchivo(const char * modoApertura);

    void altaRegistro();
    void mostrarRegistros();

    void cantidadViajesPorMedioTransporte();
    void viajeConMenorImporte();
    void mesMayorRecaudacionSubte();

    ArchivoViajes();
    ~ArchivoViajes();

private:
    FILE * ArchivoRegistrosViajes;
    Viaje registroViaje;
};

#endif // ARCHIVOVIAJES_H
