 #include <iostream>
 #include <string>
 using namespace std;

// Reverse the string
void revStr(string& str){

    int size = str.length();

    for(int i=0; i < size/2; i++){
        char temp = str[i];
        str[i] = str[size - 1 - i];
        str[size - 1 - i] = temp;
    }

}

// main conversion function 
string decToHex(int num){

    string store = "";
    int result = 0;

    while (num > 0) {

        result = (num % 16); // get the remainder

        // in base-16, after first 10 digits(0 to 9), all digits are represented with alphabets so switch will take care of all cases from 10-15 and convert them to respective alphabet

        switch (result)
        {
        case 10:
            store += "A";
            break;
        case 11:
            store += "B";
            break;
        case 12:
            store += "C";
            break;
        case 13:
            store += "D";
            break;
        case 14:
            store += "E";
            break;
        case 15:
            store += "F";
            break;
        default:
            store += to_string(result);
            break;
        }
        num /= 16;
    }

    revStr(store); // reverse the final value because we have to go from down to the up => refer to the rough copy

    return store; // return the reversed value
}

// direct algorithm for converting base10 to base16
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


// other way to solve it but it needs to reversed befor the cout statement, we can store it in a string then reverse the string and print the result but it will not handle the cases from 10-15 digit for alphabets so decToHex is perfect function for converting a base10 to base-16

void DtoH(int n){
    while (n > 0)
    {
        int result = n%16;
        cout<<result;
        n/=16;
    }
}

int main()
{
    cout<<decToHex(3284)<<endl;
    return 0;
}