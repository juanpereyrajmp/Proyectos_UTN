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

person::person(){
    _firstName = "";
    _lastName = "";
}
person::person(string firstName, string lastName){
    setFirstName(firstName);
    setLastName(lastName);
}
