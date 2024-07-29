#include <iostream>
using namespace std;

int deciToOctal(int number) {

  int result = 0;
  int multiplier = 1;

  while (number > 0) {

    result += (number % 8) * multiplier;
    cout<<"result = "<<result<<endl;
    number /= 8;
    cout<<"number = "<<number<<endl;
    multiplier *= 10;
    cout<<"multiplier = "<<multiplier<<endl;
    
  }

  cout<<"\n\nFinal result is: "<< result;
}

int main()
{
    deciToOctal(625);
    return 0;
}
