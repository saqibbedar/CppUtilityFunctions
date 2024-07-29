#include <iostream>
using namespace std;

char fillChar = ' ';  // not taking const because want to change its value
char setFill(char c) {
    fillChar = c;  
    return c;
}

string setWidth(int width) {
    string store;
    while(width > 0) {
        store += fillChar;  
        width--;
    }
    return store;
}

// using two parameters, reading width from user and then character
string setFillStr(int width, char c){
    string store;
    while (width > 0)
    {
        store += c;
        width--;
    }
    return store;
}

int main() {
    cout << setWidth(5) << setFill('*') << " HELLO " << setFillStr(5, '*') << endl;
    return 0;
}
