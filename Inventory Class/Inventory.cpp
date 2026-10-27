#include<iostream>
#include "Inventory.h"
using namespace std;
inventory::inventory ()  :
 itemnumber(0),
     quantity(0),
      cost(0),
      totalcost(0)
     {

     }
inventory :: inventory (int itno, int qun, double cost1){
    itemnumber=itno;
      quantity=qun;
      cost=cost1;
    
}
void inventory:: setitemnumber(int i){
    itemnumber=i;
}
void inventory:: setquantity(int qu){
    quantity=qu;
}
void inventory:: setcost(double c){
    cost=c;
}
void inventory:: settotalcost(int q ,double cost1){
    totalcost=q*cost1;
}
int inventory:: getitemnumber() const{
return itemnumber ;
}
int inventory::getquantity() const{
return quantity;
}
double inventory:: getcost() const{
return cost;
}
double inventory:: gettotalcost() const{
return quantity*cost;
}
