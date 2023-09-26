#include<iostream>
using namespace std;

#include "Funciones.h"

void CargarPrograma(Programa programa){

    int opcion;

    do{

        system("cls");
        cout << "*************************" << endl;
        cout << "***********MENU**********" << endl;
        cout << "*************************" << endl << endl;
        cout << "1.Cargar datos" << endl;
        cout << "2.Gastos mes actual" << endl;
        cout << "3.Ingreso mas redituable" << endl;
        cout << "4.Saldo total" << endl << endl;
        cout << "0.Salir del programa" << endl << endl;
        cout << "*************************" << endl << endl;
        cout << "Seleccionar una opcion: ";
        cin >> opcion;

        switch(opcion){
        case 1:
            system("cls");
            cout << "CARGA DE DATOS" << endl << endl;
            programa.cargar();
            break;
        case 2:
            system("cls");
            int anio, mes;
            cout << "DETALLE GASTOS POR MES" << endl << endl;
            cout << "Indicar anio y mes de los gastos para ver su detalle" << endl;
            cout << "Anio: ";
            cin >> anio;
            cout << "Mes: ";
            cin >> mes;
            cout << endl;
            programa.listarGastosPorMes(mes,anio);
            system("pause");
            break;
        case 3:
            system("cls");
            cout << "INGRESO DE MAYOR IMPORTE" << endl << endl;
            programa.listarIngresoMasRedituable();
            cout << endl;
            system("pause");
            break;
        case 4:
            system("cls");
            cout << "SALDO FINAL" << endl;
            programa.saldoFinal();
            cout << endl;
            system("pause");
            break;
        case 0:
            break;
        default:
            cout << endl << "Opcion incorrecta. Seleccione nuevamente" << endl << endl;
            system("pause");
            break;
        }


    }while (opcion!=0);

}
