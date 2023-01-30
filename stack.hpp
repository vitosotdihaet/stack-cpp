#ifndef STACK_H
#define STACK_H

#include <cinttypes>
#include <stdexcept>
#include <iostream>

namespace mystack {

template <typename T>
class Stack {

    public:
        // Constructors
        Stack(): _size(0), _capacity(1) {
            this->_arr = new T[_capacity];
            this->_arr[0] = T{};
        }

        Stack(const Stack& s): _size(s.size()), _capacity(s.capacity()) {
            this->_arr = *s.arr();
        }

        Stack(const Stack* s): _size(s.size()), _capacity(s.capacity()) {
            this->_arr = s._arr;
        }

        // Get
        uint64_t size() {
            return this->_size;
        }

        uint64_t capacity() {
            return this->_capacity;
        }

        T pop() {
            if (this->_size == 0) {
                throw std::underflow_error("Stack is empty!\n");
            }
            this->_size--;
            return this->_arr[this->_size];
        }

        // Set
        void push(T e) {
            if (this->_size + 1 > this->_capacity) {
                this->resize(2 * this->_capacity);
            }
            this->_arr[this->_size] = e;
            this->_size++;
            this->_arr[this->_size] = T{};
        }

        void resize(uint64_t new_capacity) {
            this->_capacity = new_capacity;
            this->_arr = (T*) realloc(this->_arr, new_capacity * sizeof(T));
        }

        // Destructor
        ~Stack() {
            this->_size = 0;
            this->_capacity = 0;
            delete[] this->_arr;
        }

    private:
        uint64_t _size;
        uint64_t _capacity;
        T* _arr;

}; // end of Stack class

}; // end of mystack namespace

#endif
