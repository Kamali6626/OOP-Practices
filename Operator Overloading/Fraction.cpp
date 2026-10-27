#include <iostream>
#include "Fraction.h"                                      
using namespace std;
Fraction::Fraction() {
    num = 0;
    den = 1;
}
Fraction::Fraction(int n, int d) {
    num = n;
    if (d == 0) {
        den = 1;
    } else {
        den = d;
    }
}
Fraction::Fraction(const Fraction &rhs) {
    num = rhs.num;
    den = rhs.den;
}
Fraction & Fraction::operator=(const Fraction &rhs) {
    if (this != &rhs) {
        num = rhs.num;
        den = rhs.den;
    }
    return *this;
}
Fraction Fraction::operator+(const Fraction &rhs) const {
    return Fraction(num * rhs.den + rhs.num * den, den * rhs.den);
}
Fraction Fraction::operator-(const Fraction &rhs) const {
    Fraction result;
    result.num = num * rhs.den - den * rhs.num;
    result.den = den * rhs.den;
    return result;
}
Fraction Fraction::operator*(const Fraction &rhs) const {
    Fraction result;
    result.num = num * rhs.num;
    result.den = den * rhs.den;
    return result;
}
Fraction Fraction::operator/(const Fraction &rhs) const {
    Fraction result;
    result.num = num * rhs.den;
    result.den = den * rhs.num;
    return result;
}
Fraction & Fraction::operator++() {
    num = num + den;
    return *this;
}
Fraction Fraction::operator++(int) {
    Fraction temp(*this);
    num = num + den;
    return temp;
}
Fraction & Fraction::operator--() {
    num = num - den;
    return *this;
}
Fraction Fraction::operator--(int) {
    Fraction temp(*this);
    num = num - den;
    return temp;
}
bool Fraction::operator<(const Fraction &rhs) const {
    return num * rhs.den < rhs.num * den;
}
bool Fraction::operator==(const Fraction &rhs) const {
    return num * rhs.den == den * rhs.num;
}

bool Fraction::operator>(const Fraction &rhs) const {
    return rhs < *this;
}
bool Fraction::operator<=(const Fraction &rhs) const {
    return !(*this > rhs);
}
bool Fraction::operator>=(const Fraction &rhs) const {
    return !(*this < rhs);
}
bool Fraction::operator!=(const Fraction &rhs) const {
    return num * rhs.den != rhs.num * den;
}
ostream & operator<<(ostream &os, const Fraction &rhs) {
    os << rhs.num << "/" << rhs.den;
    return os;
}
istream & operator>>(istream &is, Fraction &rhs) {
    int n, d;
    if (is >> n >> d) {
        if (d == 0) {
            d = 1;
        }
        rhs.num = n;
        rhs.den = d;
    }
    return is;
}
