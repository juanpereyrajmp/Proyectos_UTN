#include<iostream>
#include<cstring>
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

    fclose(ArchivoRegistrosViajes);

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

    fclose(ArchivoRegistrosViajes);
}

void ArchivoViajes::mesMayorRecaudacionSubte(){

    abrirArchivo("rb");

    int mayorRecaudacion = 0;
    int mesMayor;
    int anioMayor;
    string meses[36] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre","Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre","Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    Fecha aux;
    int vecMeses[36] = {};
    string nombreMesMayor;

    while(fread(&registroViaje, sizeof(Viaje), 1, ArchivoRegistrosViajes) == 1){

        aux = registroViaje.getFechaViaje();

        for (int i=0;i<12;i++){
            if (aux.getAnio() == 2020 && registroViaje.getMedioTransporte() == 2){
                vecMeses[aux.getMes()-1] += registroViaje.getImporte();
            }
            else if (aux.getAnio() == 2021 && registroViaje.getMedioTransporte() == 2){
                vecMeses[aux.getMes()+11] += registroViaje.getImporte();
            }
            else if (aux.getAnio() == 2022 && registroViaje.getMedioTransporte() == 2){
                vecMeses[aux.getMes()+23] += registroViaje.getImporte();
            }
        }

    }

    for (int i=0;i<36;i++){
        if (vecMeses[i] > mayorRecaudacion){
            mayorRecaudacion = vecMeses[i];
            mesMayor = i+1;
            anioMayor = aux.getAnio();
            nombreMesMayor = meses[i];
        }
    }

    cout << "MES CON MAYOR RECAUDACION" << endl << endl;
    cout << nombreMesMayor << " de " << anioMayor << endl;

    fclose(ArchivoRegistrosViajes);

}

ArchivoViajes::ArchivoViajes(){

}
ArchivoViajes::~ArchivoViajes(){

}
