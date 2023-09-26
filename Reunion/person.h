#pragma once

class person{
    public:
        std::string getFirstName();
        std::string getLastName();

        void setFirstName(std::string firstName);
        void setLastName(std::string lastName);

        std::string toString();

        person();
        person(std::string firstName, std::string lastName);

    private:
        std::string _firstName;
        std::string _lastName;
};


