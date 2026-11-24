#include "Base.h"
Base::Base(int x) {
    a=x;
    cout<<"Base Consturctor"<<endl;
}
Base::~Base() {
    cout<<"Base Destructor"<<endl;
}
Base::Base(const Base& obj) {
    a = obj.a;
}

Base& Base::operator=(const Base& obj) {
    if(this!= &obj){
        a = obj.a;
    }

    return *this;
}
void Base::setValue(int x) {
    a = x;
}
void Base::print() const{
    cout<<"a = "<<a<<endl;
}
Derived1::Derived1(int x, int y): Base(x){
   b=y;
    cout<<"Derived1 Consturctor"<<endl;
}
Derived1::Derived1(const Derived1& obj):Base(obj){
    b=obj.b;

}
Derived1& Derived1 ::operator=(const Derived1& obj){
    if(this !=&obj){
       Base::operator=(obj);
        b=obj.b;
    }
    return *this;
}
void Derived1::setValue(int y) {
    b = y;
}
void Derived1::print() const{
    Base::print();
    cout<<"b = "<<b<<endl;
}
Derived1::~Derived1() {
    cout<<"Derived1 Destructor"<<endl;
}
Derived2::Derived2(int x,int y,int z):Derived1(x,y) {
   c=z;
    cout<<"Derived2 Consturctor"<<endl;
}
Derived2::Derived2(const Derived2& obj):Derived1(obj){
    c=obj.c;

}
Derived2& Derived2 ::operator=(const Derived2& obj){
    if(this !=&obj){
Derived1::operator=(obj);
        c=obj.c;
    }
    return *this;
}
void Derived2::setValue(int z) {
    c = z;
}
void Derived2::print() const{
    Derived1::print();
    cout<<"c = "<<c<<endl;
}
Derived2::~Derived2() {
    cout<<"Derived2 Destructor"<< endl;
}
