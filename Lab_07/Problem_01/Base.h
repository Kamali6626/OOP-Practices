#ifndef BASE_H
#define BASE_H

#include <iostream>
using namespace std;
class Base{
    private:
    int a{};
    public:
    Base();
    ~Base();
};
class Derived1:public Base{
    private:
    int b{};
    public:
 Derived1();
~Derived1();
};
class Derived2:public Derived1{
    private:
    int c{};
    public:
    Derived2();
    ~Derived2();
};
#endif
