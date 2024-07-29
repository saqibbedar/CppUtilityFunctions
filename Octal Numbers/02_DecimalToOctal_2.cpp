#include <iostream>
#include <string>
using namespace std;

int deciToOctal(int number) {

  int result = 0;
  int multiplier = 1;

  while (number > 0) {

    result += (number % 8) * multiplier;
    number /= 8;
    multiplier *= 10;

  }

  return result; 
}


int main()
{
    int result = deciToOctal(625);
    cout<<result<<endl; 

    cout<<oct <<625; // built-in to verify 

    return 0;
}