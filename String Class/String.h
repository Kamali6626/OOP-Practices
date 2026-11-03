#ifndef STRING_H
#define STRING_H

#include <iostream>
using namespace std;

class String {
private:
    char* str{};
    int size{};
    int length(const char* _str);
    void copyString(const char* src,  char* dst) ;
public:
    String();
    String(const char* s);
    String(const String& rhs);
    ~String();

    String& operator=(const String& rhs);

    // Concatenation
    String operator+(const String& rhs) const;
    String& operator+=(const String& rhs);

    // Comparison
    bool operator==(const String& rhs) const;
    bool operator!=(const String& rhs) const;

    // Input and Output
    friend ostream& operator<<(ostream& os, const String& rhs);
    friend istream& operator>>(istream& is, String& rhs);
};
#endif
