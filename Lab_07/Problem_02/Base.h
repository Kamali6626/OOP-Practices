#ifndef BASE_H
#define BASE_H
#include <iostream>
using namespace std;
class Base{
    private:
    int a{};
    public:
    Base(int x);
     void print() const;
    ~Base();
};
class Derived1:public Base{
    private:
    int b{};
    public:
 Derived1(int x,int y);
  void print() const;
~Derived1();
};
class Derived2:public Derived1{
    private:
    int c{};
    public:
    Derived2(int x,int y,int z);
    
    void print() const;
    ~Derived2();
};
#endif
