
#include "Base.h"
Base::Base(int x) {
    a=x;
    cout<<"Base Consturctor"<<endl;
}
Base::~Base() {
    cout<<"Base Destructor"<<endl;
}
void Base::print() const{
    cout<<"a = "<<a<<endl;
}
Derived1::Derived1(int x, int y): Base(x){
   b=y;
    cout<<"Derived1 Consturctor"<<endl;
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
Derived2::Derived2(const Derived2& obj){
    
}
void Derived2::print() const{
    Derived1::print();
    cout<<"c = "<<c<<endl;
}
Derived2::~Derived2() {
    cout<<"Derived2 Destructor"<< endl;
}
