#ifndef inventory_H
#define inventory_H
class inventory
{
    private:
    int itemnumber{};
     int quantity{};
     double cost{};
     double totalcost{};
     public:
     inventory();
     inventory(int i,int c, double q);
     void setitemnumber(int );
     void setquantity(int );
     void setcost(double);
     void settotalcost(int ,double);
    int getitemnumber() const;
    int getquantity() const;
    double getcost() const;
    double gettotalcost() const;
};
#endif
