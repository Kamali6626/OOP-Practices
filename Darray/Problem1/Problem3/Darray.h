#ifndef DARRAY_H
#define DARRAY_H

#include <iostream>
using namespace std;

class DArray {

private:
    int* arr;
    int m_size;
    int m_capacity;

public:
    DArray();
    DArray(const DArray& other);
    ~DArray();
    void push_back(int value);
    int size() const;
    int capacity() const;
    int& operator[](int index);
    const int& operator[](int index) const;
    bool operator==(const DArray& other) const;

    DArray& operator=(const DArray& other);

    friend ostream& operator<<(ostream& out, const DArray& d);
};

#endif
