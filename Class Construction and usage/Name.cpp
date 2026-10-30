#include "Name.h"

Name::Name(const char* first, char middle, const char* last)
{
    int len = 0;
    while (first[len] != '\0')
        len++;

    firstName = new char[len + 1];
    for (int i = 0; i <= len; i++)      // <= taake '\0' bhi copy ho
        firstName[i] = first[i];

    middleInitial = middle;

    len = 0;
    while (last[len] != '\0')
        len++;

    lastName = new char[len + 1];
    for (int i = 0; i <= len; i++)
        lastName[i] = last[i];
}

Name::Name(const Name& obj)
{
    int len = 0;
    while (obj.firstName[len] != '\0')
        len++;

    firstName = new char[len + 1];
    for (int i = 0; i <= len; i++)
        firstName[i] = obj.firstName[i];

    middleInitial = obj.middleInitial;

    len = 0;
    while (obj.lastName[len] != '\0')
        len++;

    lastName = new char[len + 1];
    for (int i = 0; i <= len; i++)
        lastName[i] = obj.lastName[i];
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