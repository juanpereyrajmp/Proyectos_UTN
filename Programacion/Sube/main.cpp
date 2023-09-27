#include <iostream>

using namespace std;

#include "ArchivoViajes.h"

int main()
{
    ArchivoViajes archivoViajes;

    int opcion;

    do{
        system("cls");
        cout << "MENU" << endl;
        cout << "----" << endl;
        cout << "01 - Punto a" << endl;
        cout << "02 - Punto b" << endl;
        cout << "03 - Punto c" << endl;
        cout << "04 - Punto d" << endl;
        cout << "05 - Punto e" << endl;
        cout << "06 - Punto f" << endl;
        cout << "07 - Punto g" << endl;
        cout << "08 - Punto h" << endl;
        cout << "09 - Punto i" << endl;
        cout << "10 - Punto j" << endl;
        cout << "11 - Punto k" << endl;
        cout << "12 - Punto l" << endl;
        cout << "13 - Punto ll" << endl;
        cout << "14 - Punto m" << endl;
        cout << "15 - Punto n" << endl;
        cout << "16 - Punto o" << endl;
        cout << "17 - Punto p" << endl;
        cout << "18 - Punto q" << endl;
        cout << "------------" << endl;
        cout << "0 - Salir" << endl;
        cout << "--------" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        system("cls");

        switch(opcion){
        case 1:
            archivoViajes.cantidadViajesPorMedioTransporte();
            system("pause");
            break;
        case 2:
            archivoViajes.viajeConMenorImporte();
            system("pause");
            break;
        case 3:
            archivoViajes.mesMayorRecaudacionSubte();
            system("pause");
            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        case 7:

            break;
        case 8:

            break;
        case 9:

            break;
        case 10:

            break;
        case 11:

            break;
        case 12:

            break;
        case 13:

            break;
        case 14:

            break;
        case 15:

            break;
        case 16:

            break;
        case 17:

            break;
        case 18:

            break;
        case 0:

            break;
        default:
            cout << "Numero incorrecto. Seleccione nuevamente" << endl;
            break;
        }

    }while(opcion!=0);
    system("pause");
    return 0;
}
