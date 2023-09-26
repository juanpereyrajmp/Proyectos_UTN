#include<iostream>
using namespace std;
#include "CargarCadena.h"
#include "Funciones.h"
#include "Cliente.h"

FILE * archivoNombre;
FILE * clientes;
char nombreUsuario[30];
Cliente nuevoCliente;

void Bienvenida(){
    archivoNombre = fopen("nombreUsuario.dat","rb");
    if (archivoNombre == NULL){
    cout << "Error en la lectura del archivo" << endl;
    exit(1);
    }
    fread(nombreUsuario,sizeof nombreUsuario,1,archivoNombre);
    cout << "Bienvenido, " << nombreUsuario << "!" << endl << endl;
    cout << "(Podes cambiar tu nombre de usuario en los ajustes del programa)" << endl << endl;
    cout << "Este Sistema de Gestion de Prestamos, fue hecho por: " << endl << endl;
    cout << "Angel Spinazzola, Juan Pereyra, Raul Rolon y Tomas Oliveres" << endl << endl;
    cout << "Toca ENTER para comenzar!" << endl << endl;
    system("pause");
    fclose(archivoNombre);
}

void CargarMenuInicio(){

    int opcionInicio;

    do{
    system("cls");
    cout << "--------------------------------------" << endl;
    cout << "-----------MENU-DE-INICIO-------------" << endl;
    cout << "--------------------------------------" << endl;
    cout << "1 - Prestamos" << endl;
    cout << "2 - Base de datos" << endl;
    cout << "3 - Informes" << endl;
    cout << "4 - Tesoreria" << endl;
    cout << "5 - Ajustes" << endl;
    cout << "--------------------------------------" << endl;
    cout << "0 - Salir del programa" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Seleccionar una opcion: ";
    cin >> opcionInicio;

    switch(opcionInicio){
    case 1:
        CargarMenuPrestamos();
        break;
    case 2:
        CargarMenuBase();
        break;
    case 3:
        CargarMenuInformes();
        break;
    case 4:
        CargarMenuTesoreria();
        break;
    case 5:
        CargarAjustes();
        break;
    case 0:
        cout << endl << "Esperamos verte pronto, " << nombreUsuario << "!" << endl << endl;
        break;
    default:
        cout << "La opcion elegida es incorrecta. Seleccione nuevamente" << endl;
        system("pause");
        break;
    }

    }while(opcionInicio!=0);

}

void CargarMenuPrestamos(){

    int opcionPrestamos;
    do{

        system("cls");
        cout << "--------------------------------------" << endl;
        cout << "--------------PRESTAMOS---------------" << endl;
        cout << "--------------------------------------" << endl;
        cout << "1 - Nuevo prestamo" << endl;
        cout << "2 - Modificar prestamo" << endl;
        cout << "3 - Anular prestamo" << endl;
        cout << "--------------------------------------" << endl;
        cout << "0 - Volver al Menu Principal" << endl;
        cout << "--------------------------------------" << endl;
        cout << "Seleccionar una opcion: ";
        cin >> opcionPrestamos;

        switch(opcionPrestamos){
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 0:
            break;
        default:
            cout << "La opcion elegida es incorrecta. Seleccione nuevamente" << endl;
            system("pause");
            break;
        }
    }while(opcionPrestamos!=0);

}

void CargarMenuBase(){
    int opcionBase;
    do{

        system("cls");
        cout << "--------------------------------------" << endl;
        cout << "------------BASE-DE-DATOS-------------" << endl;
        cout << "--------------------------------------" << endl;
        cout << "1 - Nuevo Cliente" << endl;
        cout << "2 - Modificar Cliente" << endl;
        cout << "3 - Anular cliente" << endl;
        cout << "4 - Nuevo Tipo de prestamo" << endl;
        cout << "5 - Modicar Tipo de prestamo" << endl;
        cout << "6 - Anular Tipo de prestamo" << endl;
        cout << "--------------------------------------" << endl;
        cout << "0 - Volver al Menu Principal" << endl;
        cout << "--------------------------------------" << endl;
        cout << "Seleccionar una opcion: ";
        cin >> opcionBase;
        system("cls");
        switch(opcionBase){
        case 1:{
            clientes = fopen("Clientes.dat", "ab");
            if (clientes == nullptr){
                cout << "Error al abrir el archivo" << endl;
                exit(1);
            }
            nuevoCliente.Cargar();
            fwrite(&nuevoCliente,sizeof (Cliente), 1, clientes);
            fclose(clientes);
            system("cls");
            cout << "CLIENTE CARGADO EXITOSAMENTE" << endl << endl;
            system("pause");
        }
            break;
        case 2:

            break;
        case 3:{
            clientes = fopen("Clientes.dat", "rb+");
            if (clientes == nullptr){
                cout << "Error al leer el archivo" << endl;
                exit(1);
            }
            int idClienteParaAnular;
            cout << "Numero de cliente a anular: ";
            cin >> idClienteParaAnular;
            int posicion = sizeof(Cliente) * (idClienteParaAnular - 1);
            fseek(clientes,posicion,SEEK_SET);
            fread(&nuevoCliente,sizeof (Cliente), 1, clientes);
            nuevoCliente.setEstado(0);
            fseek(clientes,posicion,SEEK_SET);
            fwrite(&nuevoCliente,sizeof(Cliente),1,clientes);
            fclose(clientes);
            system("cls");
            cout << "Cliente anulado con exito" << endl;
            system("pause");
        }
            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        case 0:
            break;
        default:
            cout << "La opcion elegida es incorrecta. Seleccione nuevamente" << endl;
            system("pause");
            break;
        }
    }while(opcionBase!=0);
}

void CargarMenuInformes(){
    int opcionInformes;
    do{

        system("cls");
        cout << "--------------------------------------" << endl;
        cout << "---------------INFORMES---------------" << endl;
        cout << "--------------------------------------" << endl;
        cout << "1 - Listar Prestamos Activos" << endl;
        cout << "2 - Listar Clientes Activos" << endl;
        cout << "3 - Listar Tipos de Prestamo Activos" << endl;
        cout << "--------------------------------------" << endl;
        cout << "0 - Volver al Menu Principal" << endl;
        cout << "--------------------------------------" << endl;
        cout << "Seleccionar una opcion: ";
        cin >> opcionInformes;
        system("cls");
        switch(opcionInformes){
        case 1:

            break;
        case 2:{
            clientes = fopen("Clientes.dat", "rb");
            if (clientes == nullptr){
               cout << "Error al abrir el archivo" << endl;
               exit(1);
            }
            cout << "CLIENTES ACTIVOS" << endl << endl;
            while(fread(&nuevoCliente, sizeof(Cliente), 1, clientes) == 1){
                if (nuevoCliente.getEstado()){
                    nuevoCliente.Mostrar();
                }
                cout << endl;
            };
            fclose(clientes);
            system("pause");
        }
            break;
        case 3:

            break;
        case 0:
            break;
        default:
            cout << "La opcion elegida es incorrecta. Seleccione nuevamente" << endl;
            system("pause");
            break;
        }
    }while(opcionInformes!=0);
}

void CargarMenuTesoreria(){
    int opcionTesoreria;
    do{

        system("cls");
        cout << "--------------------------------------" << endl;
        cout << "---------------TESORERIA---------------" << endl;
        cout << "--------------------------------------" << endl;
        cout << "1 - Ingresar/Modificar saldo inicial" << endl;
        cout << "2 - Resumen de saldos" << endl;
        cout << "--------------------------------------" << endl;
        cout << "0 - Volver al Menu Principal" << endl;
        cout << "--------------------------------------" << endl;
        cout << "Seleccionar una opcion: ";
        cin >> opcionTesoreria;

        switch(opcionTesoreria){
        case 1:

            break;
        case 2:

            break;
        case 0:
            break;
        default:
            cout << "La opcion elegida es incorrecta. Seleccione nuevamente" << endl;
            system("pause");
            break;
        }
    }while(opcionTesoreria!=0);
}

void CargarAjustes(){
    int opcionAjustes;
    do{

        system("cls");
        cout << "--------------------------------------" << endl;
        cout << "----------------AJUSTES---------------" << endl;
        cout << "--------------------------------------" << endl;
        cout << "1 - Cambiar nombre de usuario" << endl;
        cout << "2 - Eliminar todos los datos del programa" << endl;
        cout << "--------------------------------------" << endl;
        cout << "0 - Volver al Menu Principal" << endl;
        cout << "--------------------------------------" << endl;
        cout << "Seleccionar una opcion: ";
        cin >> opcionAjustes;

        switch(opcionAjustes){
        case 1:
            system("cls");
            archivoNombre = fopen("nombreUsuario.dat","wb");
            if (archivoNombre == NULL){
            cout << "Error en la lectura del archivo" << endl;
            exit(1);
            }
            cout << "NOMBRE DE USUARIO ACTUAL: " << nombreUsuario << endl << endl;
            cout << "NUEVO NOMBRE DE USUARIO: ";
            cargarCadena(nombreUsuario,29);
            fwrite(nombreUsuario,sizeof nombreUsuario,1,archivoNombre);
            fclose(archivoNombre);
            cout << endl;
            cout << "Nombre de usuario actualizado correctamente!" << endl;
            system("pause");
            break;
        case 2:

            break;
        case 0:
            break;
        default:
            cout << "La opcion elegida es incorrecta. Seleccione nuevamente" << endl;
            system("pause");
            break;
        }
    }while(opcionAjustes!=0);
}

