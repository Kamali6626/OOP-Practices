
#include "DArray.h"

DArray::DArray() {
    arr = nullptr;
    size = 0;
    capacity = 0;
}

DArray::~DArray() {
    delete[] arr;
}


void DArray::push_back(int value) {

    if (size == capacity) {

        int newCapacity;

        if (capacity == 0) {
            newCapacity = 1;
        }
        else {
            newCapacity = capacity * 2;
        }

        int* temp = new int[newCapacity];

        for (int i{}; i < size; i++) {
            temp[i] = arr[i];
        }

        delete[] arr;

        arr = temp;
        capacity = newCapacity;
    }

    arr[size] = value;
    size++;
}
DArray& DArray::operator=(const DArray& obj) {

    if (this != &obj) {

        delete[] arr;

        size = obj.size;
        capacity = obj.capacity;

        if (capacity == 0) {
            arr = nullptr;
        }
        else {
            arr = new int[capacity];

            for (int i{}; i < size; i++) {
                arr[i] = obj.arr[i];
            }
        }
    }
    return *this;
}

ostream& operator<<(ostream& out, const DArray& d) {

    for (int i{}; i < d.size; i++) {
        out <<d.arr[i]<< " ";
    }

    return out;
}
