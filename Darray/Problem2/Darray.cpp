
#include "DArray1.h"


DArray::DArray() {
    arr = nullptr;
    m_size = 0;
    m_capacity = 0;
}


DArray::~DArray() {
    delete[] arr;
}

void DArray::push_back(int value) {

    if (m_size == m_capacity) {

        int newCapacity;

        if (m_capacity == 0) {
            newCapacity = 1;
        }
        else {
            newCapacity = m_capacity * 2;
        }

        int* temp = new int[newCapacity];

        for (int i = 0; i < m_size; i++) {
            temp[i] = arr[i];
        }

        delete[] arr;

        arr = temp;
        m_capacity = newCapacity;
    }

    arr[m_size] = value;
    m_size++;
}


int DArray::size() const {
    return m_size;
}


int DArray::capacity() const {
    return m_capacity;
}


int& DArray::operator[](int index) {
    return arr[index];
}


DArray& DArray::operator=(const DArray& other) {

    if (this != &other) {

        delete[] arr;

        m_size = other.m_size;
        m_capacity = other.m_capacity;

        if (m_capacity == 0) {
            arr = nullptr;
        }
        else {
            arr = new int[m_capacity];

            for (int i = 0; i < m_size; i++) {
                arr[i] = other.arr[i];
            }
        }
    }

    return *this;
}


ostream& operator<<(ostream& out, const DArray& d) {

    for (int i = 0; i < d.m_size; i++) {
        out << d.arr[i] << " ";
    }

    return out;
}
