#include <iostream>
#include <iomanip>
using namespace std;

string setPrecision(int num, string str){

    int i = 0; // to manage str indexes
    string temp = ""; // hold the string characters one by one

    while (i < str.length())
    {
        
        cout<<"i = "<<i<<endl; // testing output
        temp += str[i]; // getting each digit separate from string and storing it into string

        cout<<"temp = "<<temp<<endl; // testing output

        // when i = equal to num then round the number 
        if(i == num-1){
            if (str[i] >= '5'){
                char sum = str[i]+1; // store value
                cout<<"sum = "<<sum<<endl; // testing output
                temp[i] = sum; // insert value at proper index
                cout<<"str[i] = "<<str[i]<<endl; // testing output
                return temp;   // return the final output
            }
        }
        i++;

    }
    return temp;

}

int main(){
    cout<<setPrecision(4, "3.14159"); // 3.142
    return 0;
}
/*

4. `std::fixed`: Use fixed floating-point notation. Example:

    ```cpp
    std::cout << std::fixed << std::setprecision(2) << 3.14159 << std::endl;
    ```

5. `std::scientific`: Use scientific floating-point notation. Example:

    ```cpp
    std::cout << std::scientific << std::setprecision(2) << 3.14159 << std::endl;
    ```

6. `std::hex`, `std::oct`, `std::dec`: These manipulators change the base used by the stream for integer I/O. `std::hex` sets it to hexadecimal, `std::oct` sets it to octal, and `std::dec` sets it to decimal. Example:

    ```cpp
    std::cout << std::hex << 255 << std::endl;  // Outputs "ff"
    std::cout << std::oct << 255 << std::endl;  // Outputs "377"
    std::cout << std::dec << 255 << std::endl;  // Outputs "255"
    ```

7. `std::left`, `std::right`, `std::internal`: These manipulators set the alignment of output within its field. `std::left` aligns to the left, `std::right` aligns to the right, and `std::internal` aligns certain values to the right and others to the left. Example:

    ```cpp
    std::cout << std::setw(10) << std::left << "Hello" << std::endl;  // Outputs "Hello     "
    std::cout << std::setw(10) << std::right << "Hello" << std::endl;  // Outputs "     Hello"
    ```

8. `std::boolalpha` and `std::noboolalpha`: These manipulators set the boolalpha flag on the stream. When the boolalpha flag is set, bool values are output as "true" or "false". When it's not set, they're output as "1" or "0". Example:

    ```cpp
    std::cout << std::boolalpha << true << std::endl;  // Outputs "true"
    std::cout << std::noboolalpha << true << std::endl;  // Outputs "1"
    ```

9. `std::showpos` and `std::noshowpos`: These manipulators set the showpos flag on the stream. When the showpos flag is set, a plus sign is output before positive numerical values. Example:

    ```cpp
    std::cout << std::showpos << 100 << std::endl;  // Outputs "+100"
    std::cout << std::noshowpos << 100 << std::endl;  // Outputs "100"
    ```

10. `std::showbase` and `std::noshowbase`: These manipulators set the showbase flag on the stream. When the showbase flag is set, the output of numerical values is prefixed with the base indicator ("0x" for hex, "0" for octal). Example:

    ```cpp
    std::cout << std::showbase << std::hex << 255 << std::endl;  // Outputs "0xff"
    std::cout << std::noshowbase << std::hex << 255 << std::endl;  // Outputs "ff"
    ```

These are just some of the manipulators provided by the `<iomanip>` library. There are others, and you can also create your own custom manipulators.
*/