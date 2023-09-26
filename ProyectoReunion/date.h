#pragma once

class date{
    public:
        int getDay();
        int getMonth();
        int getYear();

        void setDay(int day);
        void setMonth(int month);
        void setYear(int year);

        void modifyDays(int amount);

        void Cargar();
        void Mostrar();

        std::string toString();

        date();
        date(int day, int month, int year);

    private:
        int _day;
        int _month;
        int _year;

        void addDay();
        void subtractDay();

        bool leapYear();
};


