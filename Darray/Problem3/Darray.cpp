#include "DArray2.h"


DArray::DArray()
{
    arr = nullptr;
    currentSize = 0;
    allocatedCapacity = 0;
}

// Copy Constructor
DArray::DArray(const DArray &rhs)
{
    currentSize = rhs.currentSize;
    allocatedCapacity = rhs.allocatedCapacity;

    if (allocatedCapacity == 0)
        arr = nullptr;
    else
    {
        arr = new int[allocatedCapacity];

        for (int i = 0; i < currentSize; ++i)
        {
            arr[i] = rhs.arr[i];
        }
    }
}


void DArray::push_back(int value)
{
    if (currentSize == allocatedCapacity)
    {
        int newCapacity;

        if (allocatedCapacity == 0)
            newCapacity = 1;
        else
            newCapacity = allocatedCapacity * 2;

        int *temp = new int[newCapacity];

        for (int i = 0; i < currentSize; ++i)
        {
            temp[i] = arr[i];
        }

        delete[] arr;

        arr = temp;
        allocatedCapacity = newCapacity;
    }

    arr[currentSize] = value;
    ++currentSize;
}


int DArray::size() const
{
    return currentSize;
}

// Capacity Function
int DArray::capacity() const
{
    return allocatedCapacity;
}


const int& DArray::operator[](int index) const
{
    return arr[index];
}

// Equality Operator
bool DArray::operator==(const DArray &rhs) const
{
    if (currentSize != rhs.currentSize)
        return false;

    for (int i = 0; i < currentSize; ++i)
    {
        if (arr[i] != rhs.arr[i])
            return false;
    }

    return true;
}


DArray& DArray::operator=(const DArray &rhs)
{
    if (this != &rhs)
    {
        delete[] arr;

        currentSize = rhs.currentSize;
        allocatedCapacity = rhs.allocatedCapacity;

        if (allocatedCapacity == 0)
            arr = nullptr;
        else
        {
            arr = new int[allocatedCapacity];

            for (int i = 0; i < currentSize; ++i)
            {
                arr[i] = rhs.arr[i];
            }
        }
    }

    return *this;
}

// Destructor
DArray::~DArray()
{
    delete[] arr;
}

// Insertion Operator
ostream& operator<<(ostream &os, const DArray &rhs)
{
    for (int i = 0; i < rhs.size(); ++i)
    {
        os << rhs[i] << " ";
    }

    return os;
}
