#include<iostream>
#include<ctime>
using namespace std;
#include "date.h"

int date::getDay(){
    return _day;
}
int date::getMonth(){
    return _month;
}
int date::getYear(){
    return _year;
}

void date::setDay(int day){
    _day = day;
}
void date::setMonth(int month){
    _month = month;
}
void date::setYear(int year){
    _year = year;
}

void date::modifyDays(int amount){
    if (amount > 0){
        for (int i=0;i<amount;i++){
            addDay();
        }
    }
    else if (amount < 0){
        for (int i=amount;i<0;i++){
            subtractDay();
        }
    }
}

string date::toString(){
    string fullText, dayString, monthString;
    if (_day < 10){
        dayString = "0" + to_string(_day);
    }
    else{
        dayString = to_string(_day);
    }
    if (_month < 10){
        monthString = "0" + to_string(_month);
    }
    else{
        monthString = to_string(_month);
    }
    fullText = dayString + "/" + monthString + "/" + to_string(_year);
    return fullText;
}

void date::Cargar(){
    cout << "Dia: ";
    cin >> _day;
    cout << "Mes: ";
    cin >> _month;
    cout << "Anio: ";
    cin >> _year;
}

void date::Mostrar(){
    cout << "Dia: " << _day << endl;
    cout << "Mes: " << _month << endl;
    cout << "Anio: " << _year << endl;
}

date::date(){
    time_t t = time(NULL);
    struct tm *f = localtime(&t);
    _day = f->tm_mday;
    _month = f->tm_mon + 1;
    _year = f->tm_year + 1900;
}
date::date(int day, int month, int year){
    int finalDayOfMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (leapYear()){
        finalDayOfMonth[1]++;
    }
    if (day > 0 && day <= finalDayOfMonth[month-1] && month > 0 && month <= 12 && year > 1800){
        _day = day;
        _month = month;
        _year = year;
    }
    else{
        _day = 1;
        _month = 1;
        _year = 2023;
    }
}

// Private methods

void date::addDay(){
    int finalDayOfMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (leapYear()){
        finalDayOfMonth[1]++;
    }
    if (_day == 31 && (_month == 1 || _month == 3 || _month == 5 || _month == 7 || _month == 8 || _month == 10)){
        _day = 1;
        _month++;
    }
    else if (_day == 30 && (_month == 4 || _month == 6 || _month == 9 || _month == 11)){
        _day = 1;
        _month++;
    }
    else if (_day == finalDayOfMonth[1] && _month == 2){
        _day = 1;
        _month++;
    }
    else if (_day == 31 && _month == 12){
        _day = 1;
        _month = 1;
        _year++;
    }
    else{
        _day++;
    }
}
void date::subtractDay(){
    int finalDayOfMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (leapYear()){
        finalDayOfMonth[1]++;
    }
    if (_day == 1 && (_month == 2 || _month == 4 || _month == 6 || _month == 8 || _month == 9 || _month == 11)){
        _day = 31;
        _month--;
    }
    else if (_day == 1 && (_month == 5 || _month == 7 || _month == 10 || _month == 12)){
        _day = 30;
        _month--;
    }
    else if (_day == 1 && _month == 3){
        _day = finalDayOfMonth[1];
        _month--;
    }
    else if (_day == 1 && _month == 1){
        _day = 31;
        _month = 12;
        _year--;
    }
    else{
        _day--;
    }
}

bool date::leapYear(){
    if ((_year % 4 == 0 && _year % 100 != 0) || (_year % 400 == 0)){
        return true;
    }
    else{
        return false;
    }
}
