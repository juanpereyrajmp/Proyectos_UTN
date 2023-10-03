#include<iostream>
#include<cstring>
using namespace std;
#include "parcialm1.h"

void punto1();
void punto2();

int main()
{

///Generar un archivo con el codigo de obra, la direccion y la provincia,
///de las obras cuyo estado de ejecucion sea "en ejecucion".

    punto1();
    punto2();


	return 0;
}

class ObrasEjecucion{
private:
    char _codigoObra[5];
    char _direccion[30];
    int _provincia;
    bool _activo;

public:
    void setCodigoObra(const char * codigoObra){
        strcpy(_codigoObra,codigoObra);
    }
    void setDireccion(const char * direccion){
        strcpy(_direccion,direccion);
    }
    void setProvincia(int provincia){
        _provincia = provincia;
    }
    void setActivo(bool activo){
        _activo = activo;
    }
};

bool grabarObraEjecucion(ObrasEjecucion obraNueva){
    FILE * archivoObraEjecucion;
    archivoObraEjecucion = fopen("ObrasEnEjecucion.dat", "ab");
    if (archivoObraEjecucion == nullptr){
        return false;
    }
    bool escribio = fwrite(&obraNueva, sizeof obraNueva, 1, archivoObraEjecucion);
    fclose(archivoObraEjecucion);
    return escribio;
}

void punto1(){
    Obra reg;
    ArchivoObras archivoObra("obras.dat");
    int cantidadRegistros = archivoObra.contarRegistros();
    ObrasEjecucion obraEjecucion;

    for (int i=0;i<cantidadRegistros,i++){
        reg = archivoObra.leerRegistro();
        if (reg.getEstadoEjecucion() == 3 && reg.getActivo()){
            obraEjecucion.setCodigoObra(reg.getCodigoObra());
            obraEjecucion.setDireccion(reg.getDireccion());
            obraEjecucion.setProvincia(reg.getProvincia());
            obraEjecucion.setActivo(reg.getActivo());
        }
    }
}

void punto2(){

}
