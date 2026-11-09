#ifndef STUDENT_H
#define STUDENT_H

#include "Address.h"

class Student
{
private:
    char* name;
    int rollNo;
    Address address;

public:
    Student(const char n[], int r,
            const char c[], const char co[]);

    ~Student();

    void displayStudent();
};

#endif
