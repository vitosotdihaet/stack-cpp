#ifndef STACK_H
#define STACK_H

#include <cinttypes>

namespace mystack {

    template <typename T> 
    class Stack {

    public:
    // Constructors
        Stack(): _size(1), _capacity(1) {
            this->_arr = new T[_size];
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
            this->_capacity--;
            return this->_arr[this->_capacity];
        }

    // Set
        void push(T e) {
            if (this->_size < this->_capacity + 1) {
                this->resize(2 * this->_size);
            }
            this->_arr[this->_capacity] = e;
            this->_arr[this->_capacity + 1] = T{};
            this->_capacity++;
        }

        void resize(uint64_t new_size) {
            this->_size = new_size;
            this->_arr = (T*) realloc(this->_arr, new_size * sizeof(T));
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
        
    };

};

#endif
