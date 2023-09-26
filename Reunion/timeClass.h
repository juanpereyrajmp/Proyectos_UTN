#pragma once

class timeClass
{
    public:
        int getHours();
        int getMinutes();
        int getSeconds();

        void setHours(int hours);
        void setMinutes(int minutes);
        void setSeconds(int seconds);

        std::string toString();

        timeClass();
        timeClass(int hours, int minutes, int seconds);

    private:
        int _hours;
        int _minutes;
        int _seconds;
};


