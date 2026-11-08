#include<iostream>
#include "Rectangle.h"
using namespace std;
int main(){
    Rectangle R1(6,7);
    // R1.setLength(5);
    // R1.setWidth(10);
    cout<<"length = "<<R1.getLength()<<endl;
    cout<<"width = "<<R1.getWidth()<<endl;
    cout<<"area = "<<R1.getArea();

}
