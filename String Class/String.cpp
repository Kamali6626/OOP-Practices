#include "String.h"

// Length function
int String::length(const char* str) {
    int count{};

    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    return count;
}

// Copy function
void String::copyString(const char* src, char* dst) {
    for (int i = 0; i <= length(src); i++) {
        dst[i] = src[i];
    }
}

// Default constructor
String::String() {
    size = 0;
    str = new char[1];
    str[0] = '\0';
}

// Parameterized constructor
String::String(const char* s) {
    size = length(s);
    str = new char[size + 1];

    copyString(s, str);
}

// Copy constructor
String::String(const String& rhs) {
    size = rhs.size;
    str = new char[size + 1];

    copyString(rhs.str, str);
}

// Destructor
String::~String() {
    delete[] str;
}

// Assignment operator
String& String::operator=(const String& rhs) {
    if (this != &rhs) {
        char* temp = new char[rhs.size + 1];

        copyString(rhs.str, temp);

        delete[] str;

        str = temp;
        size = rhs.size;
    }

    return *this;
}

// Concatenation +
String String::operator+(const String& rhs) const {
    String temp;

    delete[] temp.str;

    temp.size = size + rhs.size;
    temp.str = new char[temp.size + 1];

    int i{};

    for (; i < size; i++) {
        temp.str[i] = str[i];
    }

    for (int j{}; j < rhs.size; j++) {
        temp.str[i++] = rhs.str[j];
    }

    temp.str[i] = '\0';

    return temp;
}

// Concatenation +=
String& String::operator+=(const String& rhs) {
    *this = *this + rhs;
    return *this;
}

// Equal operator
bool String::operator==(const String& rhs) const {
    if (size != rhs.size)
        return false;

    for (int i{}; i < size; i++) {
        if (str[i] != rhs.str[i])
            return false;
    }

    return true;
}

// Not equal operator
bool String::operator!=(const String& rhs) const {
    return !(*this == rhs);
}

// Output operator
ostream& operator<<(ostream& os, const String& rhs) {
    os << rhs.str;
    return os;
}

// Input operator
istream& operator>>(istream& is, String& rhs) {
    int capacity = 10;
    int count = 0;

    char* temp = new char[capacity];
    char ch;

    while (is.get(ch) && ch != ' ' && ch != '\n') {

        if (count == capacity - 1) {
            capacity *= 2;

            char* newTemp = new char[capacity];

            for (int i = 0; i < count; i++) {
                newTemp[i] = temp[i];
            }

            delete[] temp;
            temp = newTemp;
        }
 
        temp[count++] = ch;
    }

    temp[count] = '\0';

    if (count > 0) {
        rhs = String(temp);
    }

    delete[] temp;

    return is;
}