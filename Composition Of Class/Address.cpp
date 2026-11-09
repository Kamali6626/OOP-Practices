#include <iostream>
#include <cstring>
#include "Address.h"
using namespace std;

Address::Address(const char c[], const char co[])
{
    city = new char[strlen(c) + 1];
    strcpy(city, c);

    country = new char[strlen(co) + 1];
    strcpy(country, co);
}

Address::~Address()
{
    delete[] city;
    delete[] country;
}

void Address::displayAddress()
{
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
}
