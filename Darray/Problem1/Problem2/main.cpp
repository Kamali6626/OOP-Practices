
#include "DArray.h"

int main()
{
    DArray darr1;
    for (int j{}; j < 15; ++j)
    {
        darr1.push_back(j * 2);
        cout << darr1.size() << '\t'
             << darr1.capacity() << endl;
    }
    cout << darr1 << endl;
    for (int j{}; j < 15; ++j)
    {
        darr1[j] += j;
    }
    cout << darr1 << endl;
    return 0;
}
