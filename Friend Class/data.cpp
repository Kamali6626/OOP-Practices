#include "Data.h"

Data :: Data() : length(0),width(0)
{

}
Data ::Data(int l, int w){
 length=l;
 width=w;

}
void Data::setlength(int L){
    length=L;
}
void Data:: setwidth(int w){
    width=w;
}
int Data::getlength() const{
    return length;
}
int Data:: getwidth() const{
    return width;
}
 int   calculate_volume(const Data &f1,int hight){
 return f1.length * f1.width *hight;
}

