#ifndef Rectangle_h
#define Rectangle_h
class Rectangle
{
    private:
    double width;
    double length;
    public:
  Rectangle(double w, double l);

    void setWidth(double) ;
    void setLength(double) ;
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};
#endif
