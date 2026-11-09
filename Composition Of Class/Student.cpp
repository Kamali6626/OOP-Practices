#include <iostream>
#include <cstring>
#include "Student.h"
using namespace std;

Student::Student(const char n[], int r,
                 const char c[], const char co[])
    : address(c, co)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);

    rollNo = r;
}

Student::~Student()
{
    delete[] name;
}

void Student::displayStudent()
{
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;

    address.displayAddress();
}
