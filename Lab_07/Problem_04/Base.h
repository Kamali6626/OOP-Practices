#ifndef BASE4_H
#define BASE4_H
using namespace std;
#include <iostream>

class Base {
private:
    int a{};
public:
    Base(int x);
    Base(const Base& obj);
    Base& operator=(const Base& obj);
    void B_setValue(int x);
    int B_getValue() const;
    virtual ~Base();
};
class Derived1 : public Base {
private:
    int b{};
public:
    Derived1(int x, int y);
    Derived1(const Derived1& obj);
    Derived1& operator=(const Derived1& obj);
    void D1_setValue(int y);
    int D1_getValue() const;
    ~Derived1();
};
class Derived2 : public Derived1 {
private:
    int c{};
public:
    Derived2(int x, int y, int z);
    Derived2(const Derived2& obj);
    Derived2& operator=(const Derived2& obj);
    void D2_setValue(int z);
    int D2_getValue() const;
    ~Derived2();
};
ostream& operator<<(std::ostream& out, const Derived2& obj);

#endif
