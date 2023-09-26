#ifndef REUNION_H
#define REUNION_H
#include "date.h"
#include "timeClass.h"
#include "person.h"
#pragma once

class Reunion{
public:
    void setFecha(date fecha);
    void setHorario(timeClass horario);
    void setLugar(std::string lugar);
    void setTema(std::string tema);
    void setDuracion(int duracion);
    void setIntegrantes(person integrantes, int indice);

    date getFecha();
    timeClass getHorario();
    std::string getLugar();
    std::string getTema();
    int getDuracion();
    int getCantidadIntegrantes();
    person getIntegrante(int indice);

    std::string toString();

    void Cargar();
    void CargarIntegrantes(int cantidadIntegrantes);
    void Mostrar();
    void MostrarIntegrantes(int cantidadIntegrantes);


    Reunion(int cantidadIntegrantes);
    ~Reunion();

private:
    date _fecha;
    timeClass _horario;
    std::string _lugar;
    std::string _tema;
    int _duracion, _cantidadIntegrantes;
    person *_integrantes;
};

#endif // REUNION_H
