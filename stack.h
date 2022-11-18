#ifndef STACK_H
#define STACK_H
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

#endif
