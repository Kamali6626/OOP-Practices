#ifndef DARRAY2_H
#define DARRAY2_H

#include <iostream>
using namespace std;

class DArray
{
private:
    int *arr{};
    int currentSize{};
    int allocatedCapacity{};

public:
    DArray();
    DArray(const DArray &);

    void push_back(int);

    int size() const;
    int capacity() const;

    const int& operator[](int) const;
    bool operator==(const DArray &) const;

    DArray& operator=(const DArray &);

    ~DArray();
};

ostream& operator<<(ostream &, const DArray &);

#endif
