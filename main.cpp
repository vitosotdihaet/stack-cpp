#include <iostream>
#include "stack.hpp"

using namespace std;
using namespace mystack;

int main() {
    Stack<char> s;
    s.push('a');
    s.push('b');

    for (uint64_t i = 0; i < s.size(); ++i) {
        cout << s.pop() << ' ';
    }
    cout << '\n';

    return 0;
}