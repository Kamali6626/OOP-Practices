#include "Name.h"

int Name::length(const char* str) const
{
    int count = 0;
    while (str[count] != '\0')
        count++;
    return count;
}

Name::Name()
{
    firstName = new char[1];
    firstName[0] = '\0';

    middleInitial = '\0';

    lastName = new char[1];
    lastName[0] = '\0';
}

Name::Name(const char* first, char middle, const char* last)
{
    firstName = new char[length(first) + 1];
    for (int i = 0; i <= length(first); i++)
        firstName[i] = first[i];

    middleInitial = middle;

    lastName = new char[length(last) + 1];
    for (int i = 0; i <= length(last); i++)
        lastName[i] = last[i];
}

Name::Name(const Name& obj)
{
    firstName = new char[length(obj.firstName) + 1];
    for (int i = 0; i <= length(obj.firstName); i++)
        firstName[i] = obj.firstName[i];

    middleInitial = obj.middleInitial;

    lastName = new char[length(obj.lastName) + 1];
    for (int i = 0; i <= length(obj.lastName); i++)
        lastName[i] = obj.lastName[i];
}

Name& Name::operator=(const Name& obj)
{
    if (this != &obj)
    {
        char* newFirst = new char[length(obj.firstName) + 1];
        for (int i = 0; i <= length(obj.firstName); i++)
            newFirst[i] = obj.firstName[i];

        char* newLast = new char[length(obj.lastName) + 1];
        for (int i = 0; i <= length(obj.lastName); i++)
            newLast[i] = obj.lastName[i];

        delete[] firstName;
        delete[] lastName;

        firstName = newFirst;
        lastName = newLast;
        middleInitial = obj.middleInitial;
    }
    return *this;
}

Name::~Name()
{
    delete[] firstName;
    delete[] lastName;
}

ostream& operator<<(ostream& out, const Name& obj)
{
    out << obj.firstName << " " << obj.middleInitial << ". " << obj.lastName;
    return out;
}