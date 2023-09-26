#ifndef PROGRAMA_H
#define PROGRAMA_H
#include "Gasto.h"
#include "Ingreso.h"

class Programa{
public:
    Ingreso getIngresos(Ingreso *ingresos, int indice);
    Gasto getGastos(Gasto *gastos, int indice);

    void setIngresos(Ingreso *vecIngresos, int tam);
    void setGastos(Gasto *vecGastos, int tam);

    void cargar();
    void mostrarIngresos();
    void mostrarGastos();

    void listarGastosPorMes(int mes, int anio);
    void listarIngresoMasRedituable();
    void saldoFinal();

    Programa();
    ~Programa();

private:
    Ingreso _ingresos[5];
    Gasto _gastos[5];
};

#endif // PROGRAMA_H
