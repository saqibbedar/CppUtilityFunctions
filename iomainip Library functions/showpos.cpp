#include <iostream>
#include <string>
using namespace std;

string showpos(int num){
    if(num > 0){
        return '+' + to_string(num);
    }
    return to_string(num);
}
char noshowpos(){

}

int main()
{
    cout << showpos(100) <<endl;  // Outputs "+100"
    cout << std::noshowpos << 100 << endl;  // Outputs "100"

    return 0;
}