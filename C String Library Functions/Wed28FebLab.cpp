// character arrays
// 28 feb 2024

#include <iostream>
using namespace std;

// cpp consider char array as a single variable, char terminated with \0

int main()
{
    // initialization of character
    char name[20] = {'a', 'h', 'm', 'e', 'd'}; 
    cout<<name<<endl;
    char anotherName[] = {"ahmed"};
    cout<<anotherName<<" size is: "<<sizeof(anotherName)<<endl;
    char str[30] = "\0";
    cout<<sizeof(str)<<endl;
    // char anotherStr[30] = "\0";
    // char n[] = {'a', 'h', 'm', 'e', 'd'}; // size is = 5; \0 will not be counted in this case, so we have to use \0 at the end of string explicitly
    // std::cout<<sizeof(n)<<std::endl;

    // char n2[] = {'a', 'h', 'm', 'e', 'd', '\0'}; // size = 6
    // std::cout<<sizeof(n2)<<std::endl; // 6

    // char n3[] = {"Ahmed"};
    // std::cout<<"address of n3 is "<<&n3<<std::endl;
    // std::cout<<sizeof(n3)<<std::endl; // 6

    char newName[30];
    cout<<"Enter new Name: ";
    cin.get(newName, 30); // we can use terminator sign here
    cout<<"Your name is: "<<newName<<std::endl;

    char text[500];
    cout<<"Enter a sentence: ";
    cin.getline(text, 500, '$'); // $ is a terminator here
    cin.ignore();
    cout<<text;
    
    return 0;
}