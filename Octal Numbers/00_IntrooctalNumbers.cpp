#include <iostream>
using namespace std;

int main()
{
    int x = 100;

    cout<<"x = "<<oct<<x; // 8

    // why output is 8?

    // In c++, numbers prefixed with 0 are treated as octal (base-8) numbers. Octal numbers are a way of representing integers using only the digits 0 to 7. Each octal digit represent a power of 8.

    // The number 010 is an octal number, which can be broken as follows:

    // 010 = 0 * 8^2 + 1 * 8^1 + 0 * 8^0 = 0 + 8 + 0 = 8

    return 0;
}