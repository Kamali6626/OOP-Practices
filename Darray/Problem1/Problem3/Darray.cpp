#include "DArray.h"
DArray::DArray() {
    m_size = 0;
    m_capacity = 2;
    arr = new int[m_capacity];
}
DArray::~DArray() {
    delete[] arr;
}
void DArray::push_back(int value) {
    if (m_size == m_capacity) {
        m_capacity = m_capacity * 2;
        int* newArr = new int[m_capacity];

        for (int i = 0; i < m_size; i++) {
            newArr[i] = arr[i];
        }

        delete[] arr;
        arr = newArr;
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
    if (this == &other) {
        return *this;
    }
    delete[] arr;
    m_size = other.m_size;
    m_capacity = other.m_capacity;
    arr = new int[m_capacity];

    for (int i = 0; i < m_size; i++) {
        arr[i] = other.arr[i];
    }

    return *this;
}
DArray::DArray(const DArray& other) {
    m_size = other.m_size;
    m_capacity = other.m_capacity;
    arr = new int[m_capacity];

    for (int i = 0; i < m_size; i++) {
        arr[i] = other.arr[i];
    }
}
const int& DArray::operator[](int index) const {
    return arr[index];
}
bool DArray::operator==(const DArray& other) const {
    if (m_size != other.m_size) {
        return false;
    }
    for (int i = 0; i < m_size; i++) {
        if (arr[i] != other.arr[i]) {
            return false;
        }
    }
    return true;
}
ostream& operator<<(ostream& out, const DArray& d) {
    for (int i = 0; i < d.m_size; i++) {
        out << d.arr[i] << " ";
    }
    return out;
}
