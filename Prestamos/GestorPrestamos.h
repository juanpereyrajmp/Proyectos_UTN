#ifndef GESTORPRESTAMOS_H
#define GESTORPRESTAMOS_H


class GestorPrestamos{
public:
    int getIdOperacion();
    int getIdCliente();
    int getIdPrestamo();

    void setIdOperacion(int idOperacion);
    void setIdCliente(int idCliente);
    void setIdPrestamo(int idPrestamo);

    void cargar();
    void mostrar();

    GestorPrestamos();
    ~GestorPrestamos();

private:
    int _idOperacion;
    int _idCliente;
    int _idPrestamo;
};

#endif // GESTORPRESTAMOS_H
