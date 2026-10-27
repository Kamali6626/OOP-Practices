#ifndef Fraction_H
#define Fraction_H

#include <iostream>

class Fraction {
private:
    int num, den;

public:
    Fraction();
    Fraction(int n, int d);
    Fraction(const Fraction &rhs);
    
    Fraction & operator=(const Fraction &rhs);
    Fraction operator+(const Fraction &rhs) const;
    Fraction operator-(const Fraction &rhs) const;
    Fraction operator*(const Fraction &rhs) const;
    Fraction operator/(const Fraction &rhs) const;
    
    Fraction & operator++();
    Fraction operator++(int);
    Fraction & operator--();
    Fraction operator--(int);
    
    bool operator<(const Fraction &rhs) const;
    bool operator==(const Fraction &rhs) const;
    bool operator>(const Fraction &rhs) const;
    bool operator<=(const Fraction &rhs) const;
    bool operator>=(const Fraction &rhs) const;
    bool operator!=(const Fraction &rhs) const;

    friend std::istream & operator>>(std::istream &is, Fraction &rhs);
    friend std::ostream & operator<<(std::ostream &os, const Fraction &rhs);
};

#endif
