#include<iostream>
#include<cstring>
#include <iomanip>
using namespace std;
#include "CargarCadena.h"
#include "Funciones.h"

FILE * ArchivoPaises;
FILE * ArchivoCiudades;
Pais pais;
Ciudad ciudad;


bool BuscarRegistroPais(){
    char codigoPais[4];

    cout << "INGRESE EL CODIGO DE PAIS A BUSCAR: ";
    cargarCadena(codigoPais,3);

    ArchivoPaises = fopen("paises.dat", "rb");

    if (ArchivoPaises == nullptr){
        cout << "Error de lectura del archivo" << endl;
        exit(1);
    }

    while(fread(&pais, sizeof(Pais), 1, ArchivoPaises) == 1){

        if (strcmp(pais.getCodigo(), codigoPais) == 0){
            return true;
        }
    }

    return false;

    fclose(ArchivoPaises);
}

void AgregarRegistroPais(){

    ArchivoPaises = fopen("paises.dat", "ab");

    if (ArchivoPaises == nullptr){
        cout << "Error en la apertura del archivo" << endl;
        exit(1);
    }

    cout << "INGRESAR NUEVO REGISTRO DE PAIS" << endl << endl;
    pais.cargar();
    cout << endl;

    fwrite(&pais, sizeof(Pais), 1, ArchivoPaises);

    cout << "PAIS INGRESADO CON EXITO" << endl;

    fclose(ArchivoPaises);

}

void ListarPaises(){

    ArchivoPaises = fopen("paises.dat", "rb");

    if (ArchivoPaises == nullptr){
        cout << "Error en la lectura del archivo" << endl;
        exit(1);
    }

    while(fread(&pais, sizeof(Pais), 1, ArchivoPaises) == 1){
        pais.mostrar();
        cout << endl;
    }

    fclose(ArchivoPaises);
}

void ListarCiudades(){

    char codigoPais[4];

    cout << "INGRESAR CODIGO DE PAIS: ";
    cargarCadena(codigoPais,3);

    ArchivoCiudades = fopen("ciudades.dat", "rb");
    ArchivoPaises = fopen("paises.dat", "rb");

    if (ArchivoCiudades == nullptr){
        cout << "Error en la lectura del archivo" << endl;
        exit(1);
    }

    if (ArchivoPaises == nullptr){
        cout << "Error lectura" << endl;
        exit(1);
    }

    int capitalPais;
    char nombreCapital[35];

    while (fread(&pais, sizeof(Pais), 1, ArchivoPaises) == 1){
        if (strcmp(codigoPais, pais.getCodigo()) == 0){
            capitalPais = pais.getIDCapital();
        }
    }

    while (fread(&ciudad, sizeof(Ciudad), 1, ArchivoCiudades) == 1){
        if (strcmp(codigoPais, ciudad.getIDPais()) == 0){
            ciudad.mostrar();
            cout << endl;
            if (capitalPais == ciudad.getID()){
                strcpy(nombreCapital, ciudad.getNombre());
            }
        }
    }

    cout << "La Capital del pais es " << nombreCapital << endl;

    fclose(ArchivoCiudades);
    fclose(ArchivoPaises);
}

void ListarSuperficies(){

    float superficieTotal = 0;

    ArchivoPaises = fopen("paises.dat", "rb");

    if (ArchivoPaises == nullptr){
        cout << "Error de lectura" << endl;
        exit(1);
    }

    while (fread(&pais, sizeof(Pais), 1, ArchivoPaises) == 1){
        superficieTotal += pais.getSuperficie();
    }

    fclose(ArchivoPaises);

    ArchivoPaises = fopen("paises.dat", "rb");

    if (ArchivoPaises == nullptr){
        cout << "Error de lectura" << endl;
        exit(1);
    }

    while (fread(&pais, sizeof(Pais), 1, ArchivoPaises) == 1){
        cout << pais.getNombre() << ": " << fixed << setprecision(0) << pais.getSuperficie();
        cout << " - " << fixed << setprecision(4) << pais.getSuperficie() / superficieTotal * 100 << "% del total" << endl;
    }

    fclose(ArchivoPaises);

}


