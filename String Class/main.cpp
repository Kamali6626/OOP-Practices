#include <iostream>
#include "String.h"
using namespace std;

int main() {

    String s1("Operating");
    String s2("System");

    cout << "First String: " << s1 << endl;
    cout << "Second String: " << s2 << endl;

    String s3 = s1 + s2;
    cout << "Concatenation: " << s3 << endl;

    s1 += s2;
    cout << "Plus Equal: " << s1 << endl;

    String s4("Hello");
    String s5("Hello");

    cout << "Equal: " << boolalpha << (s4 == s5) << endl;
    cout << "Not Equal: " << (s4 != s5) << endl;

    String s6;
    cout << "Enter String: ";
    cin >> s6;

    cout << "Your String: " << s6 << endl;

    return 0;
}