#ifndef NAME_H
#define NAME_H

#include <iostream>
using namespace std;

class Name
{
private:
    char* firstName;
    char middleInitial;
    char* lastName;

public:
    Name(const char* first, char middle, const char* last);
    Name(const Name& obj);
    ~Name();

    friend ostream& operator<<(ostream& out, const Name& obj);
};

#endif