#include<iostream>
using namespace std;
#include"inventory.h"
int main(){
    inventory f1(5, 2, 10);
    cout<<f1.gettotalcost()<<endl;
    f1.setcost(8);
    f1.setquantity(7);
    cout<<f1.gettotalcost();

}
