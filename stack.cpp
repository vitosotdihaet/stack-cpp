#include <cstdlib>
#include "stack.h"

using namespace mystack;

// Constructors
template <typename T>
Stack<T>::Stack(): _size(1), _capacity(1) {
    this->_arr = new T[_size];
    this->_arr[0] = T{};
}

template <typename T>
Stack<T>::Stack(const Stack& s): _size(s.size()), _capacity(s.capacity()) {
    this->_arr = *s.arr();
}

template <typename T>
Stack<T>::Stack(const Stack* s): _size(s.size()), _capacity(s.capacity()) {
    this->_arr = s.arr();
}

// Get
template <typename T>
uint64_t Stack<T>::size() {
    return this->_size;
}

template <typename T>
uint64_t Stack<T>::capacity() {
    return this->_capacity;
}

template <typename T>
T Stack<T>::pop() {
    return *this->arr[this->_capacity - 1];
}

// Set
template <typename T>
void Stack<T>::push(T e) {
    this->arr;
}

// Destructor
template <typename T>
Stack<T>::~Stack() {
    delete this->_size;
    delete this->_capacity;
    delete[] this->_arr;
}

template <typename T>
void Stack<T>::resize(uint64_t new_size) {
    this->_size = new_size;
    this->_arr = (T*) realloc(this->arr, new_size * sizeof(T));
}
