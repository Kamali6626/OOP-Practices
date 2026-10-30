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
    int len = length(first);
    firstName = new char[len + 1];
    for (int i = 0; i <= len; i++)
        firstName[i] = first[i];

    middleInitial = middle;

    len = length(last);
    lastName = new char[len + 1];
    for (int i = 0; i <= len; i++)
        lastName[i] = last[i];
}

Name::Name(const Name& obj)
{
    int len = length(obj.firstName);
    firstName = new char[len + 1];
    for (int i = 0; i <= len; i++)
        firstName[i] = obj.firstName[i];

    middleInitial = obj.middleInitial;

    len = length(obj.lastName);
    lastName = new char[len + 1];
    for (int i = 0; i <= len; i++)
        lastName[i] = obj.lastName[i];
}

Name& Name::operator=(const Name& obj)
{
    if (this != &obj)
    {
        int len = length(obj.firstName);
        char* newFirst = new char[len + 1];
        for (int i = 0; i <= len; i++)
            newFirst[i] = obj.firstName[i];

        len = length(obj.lastName);
        char* newLast = new char[len + 1];
        for (int i = 0; i <= len; i++)
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

istream& operator>>(istream& in, Name& obj)
{
    char first[100];
    char middle;
    char last[100];

    in >> first >> middle >> last;

    if (in)
    {
        int len = obj.length(first);
        char* newFirst = new char[len + 1];
        for (int i = 0; i <= len; i++)
            newFirst[i] = first[i];

        len = obj.length(last);
        char* newLast = new char[len + 1];
        for (int i = 0; i <= len; i++)
            newLast[i] = last[i];

        delete[] obj.firstName;
        delete[] obj.lastName;

        obj.firstName = newFirst;
        obj.lastName = newLast;
        obj.middleInitial = middle;
    }
    return in;
}

bool operator==(const Name& obj1, const Name& obj2)
{
    int i = 0;
    while (obj1.firstName[i] != '\0' && obj2.firstName[i] != '\0')
    {
        if (obj1.firstName[i] != obj2.firstName[i])
            return false;
        i++;
    }
    if (obj1.firstName[i] != obj2.firstName[i])
        return false;

    if (obj1.middleInitial != obj2.middleInitial)
        return false;

    i = 0;
    while (obj1.lastName[i] != '\0' && obj2.lastName[i] != '\0')
    {
        if (obj1.lastName[i] != obj2.lastName[i])
            return false;
        i++;
    }
    return obj1.lastName[i] == obj2.lastName[i];
}