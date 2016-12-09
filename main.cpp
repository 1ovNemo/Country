#include <iostream>
#include "Country.h"

using namespace std;

void show(Country obj) {
    cout << "Name:\t" << obj.getName() << endl;
    cout << "Government:\t" << obj.getGovernment() << endl;
    cout << "Area:\t" << obj.getArea() << endl;
}

int main() {

    Country a("Name","Government",603628);

    show(a);

    Country b(a);
    show(b);

    Country *k = new Country();

    k->setName("Name1");
    k->setGovernment("Government1");
    k->setArea(42550000);

    show(*k);

    return 0;
}
