#pragma once
#include "date.h"
#include "timeClass.h"
#include "person.h"

class reunion{
    public:
        date getDate();
        timeClass getTime();
        std::string getPlace();
        std::string getSubject();
        int getDuration();
        person getPerson(int index);
        int getNumberOfMembers();

        void setDate(date date);
        void setTime(timeClass time);
        void setPlace(std::string place);
        void setSubject(std::string subject);
        void setDuration(int duration);
        void setPerson(person member, int index);

        std::string toString();

        reunion(int numberOfMembers);
        ~reunion();

    private:
        date _date;
        timeClass _time;
        std::string _place;
        std::string _subject;
        int _duration, _numberOfMembers;
        person *_members;
};


