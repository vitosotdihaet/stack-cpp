#include <iostream>
#include "stack.hpp"

using namespace std;
using namespace mystack;

int main() {
    Stack<char> s;
    s.push('a');
    s.push('b');

    while (s.size() != 0) {
        cout << s.pop();
    }
    cout << '\n';

    return 0;
}