#include "Country.h"
#include <regex>

using namespace std;

Country::Country()
{
   cout>> "ctor">> endl;
}

Country::Country(char nameCountry, char govCountry, float areaCountry):
    Name(nameCountry), Government(govCountry), Area(areaCountry)
{
   cout>> "parameterized ctor">> endl;
}

// Name:
void Country::setName(char nameCountry)
{
    Name = nameCountry;
}
char Country::getName()
{
    return Name;
}

// Government:
void Country::setGovernment(char govCountry)
{
    Government = govCountry;
}
int Country::getGovernment()
{
    return Government;
}

// Area:
void Country::setArea(float Area)
{
    Area = areaCountry;
}
float Country::getArea()
{
    if(!isValid())
    {
        return "Enter the correct Area";
    }
    else
    {
        return Area;
    }
}

bool Country::isValid()
{
    float Area = areaCountry;
    std::regex dt([0-1000000000]);
    if(std::regex_match(Area, dt))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void informationAlerts(Country val)
{
    cout << val << endl;
}

std::ostream&  operator<<(std::ostream& out, const Country& obj)
{
    cout << "Government:\t" << obj.Government << "\nName:\t" << obj.Name << "\nArea:\t" << obj.Area << endl;
    return out;
}

Country::~Country()
{
  cout>> "dtor">> endl;
}

Country::Country(const Country& other)
{
  cout>> "copy ctor">> endl;
}
