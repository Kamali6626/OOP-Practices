#include "Base.h"
using namespace std;
Base::Base(int x) {
    a = x;
    cout << "Base Constructor" << endl;
}

Base::~Base() {
    cout << "Base Destructor" << endl;
}

Base::Base(const Base& obj) {
    a = obj.a;
}

Base& Base::operator=(const Base& obj) {
    if (this != &obj) {
        a = obj.a;
    }
    return *this;
}

void Base::B_setValue(int x) {
    a = x;
}

int Base::B_getValue() const {
    return a;
}

Derived1::Derived1(int x, int y) : Base(x) {
    b = y;
    cout << "Derived1 Constructor" << endl;
}

Derived1::Derived1(const Derived1& obj) : Base(obj) {
    b = obj.b;
}

Derived1& Derived1::operator=(const Derived1& obj) {
    if (this != &obj) {
        Base::operator=(obj);
        b = obj.b;
    }
    return *this;
}

void Derived1::D1_setValue(int y) {
    b = y;
}

int Derived1::D1_getValue() const {
    return b;
}

Derived1::~Derived1() {
    cout << "Derived1 Destructor" << endl;
}

Derived2::Derived2(int x, int y, int z) : Derived1(x, y) {
    c = z;
    cout << "Derived2 Constructor" << endl;
}

Derived2::Derived2(const Derived2& obj) : Derived1(obj) {
    c = obj.c;
    cout << "Derived2  copy Constructor" << endl;
}

Derived2& Derived2::operator=(const Derived2& obj) {
    if (this != &obj) {
        Derived1::operator=(obj);
        c = obj.c;
    }
    return *this;
}

void Derived2::D2_setValue(int z) {
    c = z;
}

int Derived2::D2_getValue() const {
    return c;
}

Derived2::~Derived2() {
    cout << "Derived2 Destructor" << endl;
}

ostream& operator<<(ostream& out, const Derived2& obj) {
    return out << obj.B_getValue() << " "
               << obj.D1_getValue() << " "
               << obj.D2_getValue();
}
