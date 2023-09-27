#include<iostream>
using namespace std;

#include "ArchivoViajes.h"
#include "Viaje.h"

void ArchivoViajes::abrirArchivo(const char * modoApertura){

    ArchivoRegistrosViajes = fopen ("Viajes.dat", modoApertura);

    if (ArchivoRegistrosViajes == NULL){
        cout << "Error al abrir el archivo" << endl;
        exit(1);
    }

}

void ArchivoViajes::altaRegistro(){

    abrirArchivo("ab");

    registroViaje.cargar();

    fwrite(&registroViaje, sizeof(Viaje), 1, ArchivoRegistrosViajes);

    fclose(ArchivoRegistrosViajes);
}

void ArchivoViajes::mostrarRegistros(){

    abrirArchivo("rb");

    while(fread(&registroViaje, sizeof(Viaje), 1, ArchivoRegistrosViajes) == 1){
        if (registroViaje.getEstado() == 1){
            registroViaje.mostrar();
        }
        cout << endl;
    }

    fclose(ArchivoRegistrosViajes);
}

void ArchivoViajes::cantidadViajesPorMedioTransporte(){

    abrirArchivo("rb");

    int numeroTarjeta;

    cout << "INGRESAR NUMERO DE TARJETA: ";
    cin >> numeroTarjeta;
    cout << endl;

    int contadorTransporte1 = 0, contadorTransporte2 = 0, contadorTransporte3 = 0;

    while(fread(&registroViaje, sizeof(Viaje), 1, ArchivoRegistrosViajes) == 1){

        if (numeroTarjeta == registroViaje.getNumeroTarjeta()){

            if (registroViaje.getMedioTransporte() == 1){
                contadorTransporte1++;
            }
            else if(registroViaje.getMedioTransporte() == 2){
                contadorTransporte2++;
            }
            else if(registroViaje.getMedioTransporte() == 3){
                contadorTransporte3++;
            }

        }

    }

    cout << "VIAJES POR TRANSPORTE" << endl;
    cout << endl;
    cout << "Colectivo: " << contadorTransporte1 << " viajes" << endl;
    cout << "Subte: " << contadorTransporte2 << " viajes" << endl;
    cout << "Tren: " << contadorTransporte3 << " viajes" << endl;
    cout << endl;

}

void ArchivoViajes::viajeConMenorImporte(){

    abrirArchivo("rb");

    float menorImporte = 100000000;
    Viaje menorRegistro;

    while(fread(&registroViaje, sizeof(Viaje), 1, ArchivoRegistrosViajes) == 1){
        if (registroViaje.getImporte() < menorImporte){
            menorImporte = registroViaje.getImporte();
            menorRegistro.setNumeroViaje(registroViaje.getNumeroViaje());
            menorRegistro.setNumeroTarjeta(registroViaje.getNumeroTarjeta());
            menorRegistro.setFechaViaje(registroViaje.getFechaViaje());
            menorRegistro.setMedioTransporte(registroViaje.getMedioTransporte());
            menorRegistro.setImporte(registroViaje.getImporte());
            menorRegistro.setEstado(registroViaje.getEstado());
        }
    }

    cout << "REGISTRO CON MENOR IMPORTE" << endl;
    cout << endl;
    menorRegistro.mostrar();
    cout << endl;
}

void ArchivoViajes::mesMayorRecaudacionSubte(){

}

ArchivoViajes::ArchivoViajes(){

}
ArchivoViajes::~ArchivoViajes(){

}
