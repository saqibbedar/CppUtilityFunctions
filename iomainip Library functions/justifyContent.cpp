#include <iostream>
#include <iomanip>
using namespace std;

string justifyContent(int width, string str, string justify){
    string storeSpace;

    // create spaces based on width
    while (width > 0)
    {
        storeSpace += ' ';
        width--;
    }

    // check for content alignment
    if(justify == "Right"){
        return str + storeSpace;
    }else if(justify == "Center"){
        return storeSpace + str + storeSpace;
    }else{
        return storeSpace + str;
    }
}

int main()
{
    // switch between left and Right for alignment
    cout<<justifyContent(5, "hello", "Center")<<" hi ";

    return 0;
}
