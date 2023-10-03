#ifndef FECHA_H
#define FECHA_H


class Fecha{
public:
    int getDia();
    int getMes();
    int getAnio();

    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);

    bool esBiciesto();

    void cargar();
    void mostrar();

    Fecha();
    Fecha(int dia, int mes, int anio);

private:
    int _dia;
    int _mes;
    int _anio;
};

#endif // FECHA_H
