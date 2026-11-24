#ifndef BASE_H
#define BASE_H

#include <iostream>
using namespace std;
class Base{
    private:
    int a{};
    public:
    Base(int x);
    Base(const Base& obj);
    Base& operator=(const Base& obj);
     void print() const;
     void setValue(int x);
    ~Base();
};
class Derived1:public Base{
    private:
    int b{};
    public:
    Derived1(const Derived1& obj);
    Derived1& operator=(const Derived1& obj);
 Derived1(int x,int y);
  void print() const;
  void setValue(int y);
~Derived1();
};
class Derived2:public Derived1{
    private:
    int c{};
    public:
    Derived2(int x,int y,int z);
     Derived2(const Derived2& obj);
    Derived2& operator=(const Derived2& obj);
    void print() const;
    void setValue(int z);
    ~Derived2();
};
#endif
