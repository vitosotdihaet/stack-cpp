#ifndef STACK_H
#define STACK_H
#include <cstdlib>
#include <cinttypes>

namespace mystack {

    template <typename T> 
    class Stack {

    public:
    // Constructors
        Stack();
        Stack(const Stack& s);
        Stack(const Stack* p);

    // Get
        uint64_t size();
        uint64_t capacity();
        T pop();

    // Set
        void push(T e);
        void resize(uint64_t new_capacity);

    // Destructor
        ~Stack();

    private:
        T* _arr;
        uint64_t _capacity;
        uint64_t _size;
        
    };

};

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
    this->_arr = s._arr;
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
    return this->_arr[this->_capacity - 1];
}

// Set
template <typename T>
void Stack<T>::push(T e) {
    // this->arr;
}

// Destructor
template <typename T>
Stack<T>::~Stack() {
    this->_size = 0;
    this->_capacity = 0;
    delete[] this->_arr;
}

template <typename T>
void Stack<T>::resize(uint64_t new_size) {
    this->_size = new_size;
    this->_arr = (T*) realloc(this->_arr, new_size * sizeof(T));
}

#endif
