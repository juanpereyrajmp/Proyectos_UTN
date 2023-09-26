#include<iostream>
using namespace std;
#include "person.h"

string person::getFirstName(){
    return _firstName;
}
string person::getLastName(){
    return _lastName;
}

void person::setFirstName(string firstName){
    _firstName = firstName;
}
void person::setLastName(string lastName){
    _lastName = lastName;
}

string person::toString(){
    string fullName;
    fullName = _firstName + " " + _lastName;
    return fullName;
}

void person::Cargar(){
    cout << "Nombre: ";
    cin >> _firstName;
    cout << "Apellido: ";
    cin >> _lastName;
}
void person::Mostrar(){
    cout << "Nombre: " << _firstName << endl;
    cout << "Apellido: " << _lastName << endl;
}

person::person(){
    _firstName = "";
    _lastName = "";
}
person::person(string firstName, string lastName){
    setFirstName(firstName);
    setLastName(lastName);
}
