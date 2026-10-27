
#include <iostream>
#include "Fraction.h"

using namespace std;

int main() {
    Fraction f1(3, 4); // 3/4
    Fraction f2(1, 2); // 1/2 
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl << endl;
    cout << "f1 + f2 = " << f1 + f2 << endl;
    cout << "f1 - f2 = " <<f1 - f2 << endl;
    cout << "f1 * f2 = " << f1 * f2 << endl;
    cout << "f1 / f2 = " << f1 / f2 << endl << endl;
    cout << "f1 < f2:  " << (f1 < f2 ? "True" : "False") << endl;
    cout << "f1 == f2: " << (f1 == f2 ? "True" : "False") << endl;
    cout << "f1 > f2:  " << (f1 > f2 ? "True" : "False") << endl;
    cout << "f1 <= f2: " << (f1 <= f2 ? "True" : "False") << endl;
    cout << "f1 >= f2: " << (f1 >= f2 ? "True" : "False") << endl;
    cout << "f1 != f2: " << (f1 != f2 ? "True" : "False") << endl << endl;
    cout << "Original f1: " << f1 << endl;
    cout << "Pre-increment (++f1): " << ++f1 << endl;
    cout << "Post-increment (f1++): " << f1++ << endl;
    cout << "After post-increment f1: " << f1 << endl;
    cout << "Pre-decrement (--f1): " << --f1 << endl;
    cout << "Post-decrement (f1--): " << f1-- << endl;
    cout << "After post-decrement f1: " << f1 << endl << endl;
    Fraction f4 = f2; 
    Fraction f5;
    f5 = f1;          
    cout << "f4 (copied from f2) = " << f4 << endl;
    cout << "f5 (assigned from f1) = " << f5 << endl << endl;
    
    Fraction f6;
    cin >> f6;
    cout << "You entered f6 = " << f6 << endl;

    return 0;
}
