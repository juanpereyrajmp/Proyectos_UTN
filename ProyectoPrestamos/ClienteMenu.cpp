#include<iostream>
using namespace std;
#include "ClienteMenu.h"

void ClienteMenu::iniciar(){
    while(true){
        system("cls");
        int opcion;
        cout << "********************************" << endl;
        cout << "*                              *" << endl;
        cout << "*           CLIENTES           *" << endl;
        cout << "*                              *" << endl;
        cout << "********************************" << endl;
        cout << "*                              *" << endl;
        cout << "* 1 - Nuevo cliente            *" << endl;
        cout << "* 2 - Baja cliente             *" << endl;
        cout << "* 3 - Modificar cliente        *" << endl;
        cout << "* 4 - Listar clientes          *" << endl;
        cout << "* 0 - Volver al menu principal *" << endl;
        cout << "*                              *" << endl;
        cout << "********************************" << endl;
        cout << endl;
        cout << "Opcion: ";
        cin >> opcion;
        system("cls");
        switch(opcion){
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 0:
            return;
            break;
        default:
            cout << "Opcion incorrecta. Seleccione nuevamente" << endl;
            system("pause");
            break;
        }
    }
}
