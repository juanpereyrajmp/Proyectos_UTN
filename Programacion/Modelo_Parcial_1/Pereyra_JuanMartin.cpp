#include<iostream>
#include<cstring>
using namespace std;
#include "parcialm1.h"

int main()
{

    int opcion;

    do{

        system("cls");
        cout << "*****MENU*****" << endl;
        cout << "**************" << endl;
        cout << "1 - Punto 1" << endl;
        cout << "2 - Punto 2" << endl;
        cout << "**************" << endl;
        cout << "0 - Salir" << endl;
        cout << "**************" << endl;
        cout << "Opcion:";
        cin >> opcion;
        system("cls");

        switch(opcion){
        case 1:{
            ArchivoObras obrasDefault(obrasDefault);

            obrasDefault.leerRegistro(1);

            system("pause");
        }
            break;
        case 2:

            break;
        case 0:
            break;
        default:
            cout << "Opcion incorrecta. Seleccione nuevamente" << endl;
            break;
        }

    }while(opcion!=0);

	return 0;
}
