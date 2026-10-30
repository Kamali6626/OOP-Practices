#include "Name.h"

void print(Name _name)
{
    cout << "Inside doSomething " << _name << endl;
}

int main()
{
    Name name1("Object", 'O', "Programming");
    cout << name1 << endl;
    print(name1);
    cout << name1 << endl;
    {
        Name name2{};
        name2 = name1;
        cout << name2 << endl;
    }
    return 0;
}