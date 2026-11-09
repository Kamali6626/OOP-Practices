#ifndef ADDRESS_H
#define ADDRESS_H

class Address
{
private:
    char* city;
    char* country;

public:
    Address(const char c[], const char co[]);
    ~Address();

    void displayAddress();
};

#endif
