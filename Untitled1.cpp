#include <iostream>
#include <stack>
using std::cout, std::cin, std::endl; // Pre-C++17, these will need to be separate "using" lines!
using std::stack;

int main()
{
    int num;
    int remainder;
    stack<char> digits;

    cout << "Enter a decimal number:" << endl;
    cin >> num;

    while (num != 0) { // Push the digits onto the stack ...
        remainder = num % 2;
        digits.push(remainder ? '1' : '0');
        num = num / 2;
    }
    while (!digits.empty()) { // ... then print and pop them (in reverse order)
        cout << digits.top();
        digits.pop();
    }
    cout << endl;
    return 0;
}
