#include <iostream>
using namespace std;
#include "stack.hpp"
using namespace mystack;

int main() {
    Stack<char> s;

    for (uint64_t i = 0; i < s.capacity(); ++i) {
        cout << s.pop() << ' ';
    }

    return 0;
}