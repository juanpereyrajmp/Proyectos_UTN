#include<iostream>
using namespace std;
#include "reunion.h"

date reunion::getDate(){
    return _date;
}
timeClass reunion::getTime(){
    return _time;
}
string reunion::getPlace(){
    return _place;
}
string reunion::getSubject(){
    return _subject;
}
int reunion::getDuration(){
    return _duration;
}
person reunion::getPerson(int index){
    return _members[index];
}
int reunion::getNumberOfMembers(){
    return _numberOfMembers;
}

void reunion::setDate(date date){
    _date = date;
}
void reunion::setTime(timeClass time){
    _time = time;
}
void reunion::setPlace(string place){
    _place = place;
}
void reunion::setSubject(string subject){
    _subject = subject;
}
void reunion::setDuration(int duration){
    _duration = duration;
}
void reunion::setPerson(person member, int index){
    _members[index] = member;
}

string reunion::toString(){
    string fullReunion = _date.toString();
    fullReunion += "," + _time.toString();
    fullReunion += "," + getPlace();
    fullReunion += "," + getSubject();
    fullReunion += "," + to_string(_duration);
    for (int i=0;i<_numberOfMembers;i++){
        fullReunion += "," + _members[i].getFirstName();
        fullReunion += "," + _members[i].getLastName();
    }
    return fullReunion;
}

reunion::reunion(int numberOfMembers){
    if (numberOfMembers > 0){
        _members = nullptr;
        _members = new person[numberOfMembers];
        if (_members == nullptr){
            _numberOfMembers = 0;
        }
        else{
            _numberOfMembers = numberOfMembers;
        }
    }
    else{
        _numberOfMembers = 0;
    }

    _duration = 0;
    _place = "";
    _subject = "";
}
reunion::~reunion(){
    if (_numberOfMembers > 0){
        delete []_members;
    }
}




