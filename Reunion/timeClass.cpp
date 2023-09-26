#include<iostream>
using namespace std;
#include "timeClass.h"
#include <ctime>

int timeClass::getHours(){
    return _hours;
}
int timeClass::getMinutes(){
    return _minutes;
}
int timeClass::getSeconds(){
    return _seconds;
}

void timeClass::setHours(int hours){
    _hours = hours;
}
void timeClass::setMinutes(int minutes){
    _minutes = minutes;
}
void timeClass::setSeconds(int seconds){
    _seconds = seconds;
}

string timeClass::toString(){
    string fullText, hoursString, minutesString, secondsString;
    if (_hours < 10){
        hoursString = "0" + to_string(_hours);
    }
    else{
        hoursString = to_string(_hours);
    }
    if (_minutes < 10){
        minutesString = "0" + to_string(_minutes);
    }
    else{
        minutesString = to_string(_minutes);
    }
    if (_seconds < 10){
        secondsString = "0" + to_string(_seconds);
    }
    else{
        secondsString = to_string(_seconds);
    }
    fullText = hoursString + ":" + minutesString + ":" + secondsString;
    return fullText;
}

timeClass::timeClass(){
    time_t t = time(NULL);
    struct tm *f = localtime(&t);
    _seconds = f->tm_sec;
    _minutes = f->tm_min;
    _hours = f->tm_hour;
}
timeClass::timeClass(int hours, int minutes, int seconds){
    setHours(hours);
    setMinutes(minutes);
    setSeconds(seconds);
}


