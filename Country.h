#ifndef COUNTRY_H
#define COUNTRY_H

#include <iostream>
#include <string>

using namespace std;

class Country
{
    public:
        Country();
        Country(char, char, float);
        Country(const Country& other);

        // Name:
        void setName(char);
        char getName();
        //Government:
        void setGovernment(char);
        char getGovernment();
        //Area:
        void setArea(float);
        float getArea();

        bool isValid();

        friend void informationAlerts(Country);
        friend std::ostream& operator<<(std::ostream& out, const Country& com);


    private:
        char Name;
        char Government;
        float Area;
};

#endif // COUNTRY_H
