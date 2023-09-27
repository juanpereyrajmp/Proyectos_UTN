#include <iostream>
using namespace std;
#include "Pais.h"
#include "Ciudad.h"
#include "Funciones.h"


int main()
{

    int opcion;

    do{
        system("cls");
        cout << "*****MENU*****" << endl;
        cout << "**************" << endl;
        cout << "1 - Buscar pais" << endl;
        cout << "2 - Agregar pais" << endl;
        cout << "3 - Listar paises" << endl;
        cout << "4 - Listar ciudades" << endl;
        cout << "5 - Listar superficies" << endl;
        cout << "**************" << endl;
        cout << "0 - Salir" << endl;
        cout << "**************" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        system("cls");
        switch(opcion){
        case 1:
            if (BuscarRegistroPais()){
                cout << "El pais existe" << endl;
            }
            else{
                cout << "El pais no existe" << endl;
            }
            system("pause");
            break;
        case 2:
            AgregarRegistroPais();
            system("pause");
            break;
        case 3:
            ListarPaises();
            system("pause");
            break;
        case 4:
            ListarCiudades();
            system("pause");
            break;
        case 5:
            ListarSuperficies();
            system("pause");
            break;
        case 0:
            break;
        default:
            cout << "Opcion incorrecta. Seleccione nuevamente" << endl;
            break;
        }

    }while (opcion != 0);

    return 0;
}
