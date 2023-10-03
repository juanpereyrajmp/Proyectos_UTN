#include<iostream>
using namespace std;

#include "Programa.h"
#include "ClienteMenu.h"

void Programa::bienvenida(){
    cout << "Hola " << _nombreUsuario << "!" << endl << endl;
    cout << "Estas preparado para ingresar al mejor sistema de gestion de prestamos?" << endl << endl;
    cout << "De ser asi, probablemente tengamos que recomendarte otro..." << endl << endl;
    cout << "Si aun sabiendo esto queres ingresar. Toca ENTER para redirigirte al menu principal." << endl << endl << endl;
    cout << "Este sistema fue creado con mucho amor por Angel Spinazzola, Juan Pereyra y Raul Rolon" << endl << endl;
    system("pause");
}

void Programa::iniciar(){
    while(true){
        system("cls");
        int opcion;
        cout << "********************************" << endl;
        cout << "*                              *" << endl;
        cout << "*        MENU PRINCIPAL        *" << endl;
        cout << "*                              *" << endl;
        cout << "********************************" << endl;
        cout << "*                              *" << endl;
        cout << "* 1 - Operaciones              *" << endl;
        cout << "* 2 - Clientes                 *" << endl;
        cout << "* 3 - Tipos de prestamo        *" << endl;
        cout << "* 4 - Tesoreria                *" << endl;
        cout << "* 5 - Ajustes                  *" << endl;
        cout << "* 0 - Salir del programa       *" << endl;
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
            {
                ClienteMenu clienteMenu;
                clienteMenu.iniciar();
            }
            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

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
