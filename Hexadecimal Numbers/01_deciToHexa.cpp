 #include <iostream>
 using namespace std;

int deciToHex(int num){
    int result = 0;
    int multiplier = 1;
    while (num > 0) {
        result += (num % 16) * multiplier;
        num /= 16;
        multiplier *= 10;
    }
    return result;
}

int main()
{
    cout<<deciToHex(100);
    return 0;
}