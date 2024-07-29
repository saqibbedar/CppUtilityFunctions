#include <iostream>
#include <string>
using namespace std;

// string setWidth(int width){
//     return string(width, c);
// }

string setWidth(int width){
    string store;
    while(width >= 0){
        store+= ' '; // store spaces based on width size
        width--;
    }
    return store;
}

// overloaded
char setWidth(){
    return '\t';
}

int main()
{
    cout<<"hello"<<setWidth(2)<<"hello"<<endl;
    cout<<"hello"<<setWidth()<<"hello"<<endl;

    return 0;
}
