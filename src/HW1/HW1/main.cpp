//Name: Albert Huynh
//Date: 9/26/2023
//Description: convertToDecimal and reverseString


#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int convertToDecimal(string binary);
string reverseString(string input);

int main()
{
    /*
    cout << "convertToDecimal(\"10101\"): " << convertToDecimal("10101") << endl; // Output: 21
    cout << "convertToDecimal(\"0000000001\"): " << convertToDecimal("0000000001") << endl; // Output: 1
    cout << "convertToDecimal(\"1111111111\"): " << convertToDecimal("1111111111") << endl; // Output: 1023
*/
    cout << "reverseString(\"Hello\"): " << reverseString("Hello") << endl; // will print olleH
    cout << "reverseString(\"Beautiful World\"): " << reverseString("Beautiful World") << endl; // will print dlroW lufituaeB
    

   // cout << ;

    return 0;
}

int convertToDecimal(string binary)
{
    int decimalValue = 0;
    int exponent = 0;

    // Start from the rightmost (least significant) bit of the binary string
    for (int i = binary.length() - 1; i >= 0; i--)
    {
        if (binary[i] == '1')
        {
            // If the current bit is '1', add 2^exponent to the decimal value
            decimalValue += static_cast<int>(pow(2, exponent));
        }
        exponent++;
    }

    return decimalValue;
}

string reverseString(string input)
{
    string reversed;

    for (int i = input.length() - 1; i >= 0; i--)
    {
        reversed += input[i];
    }

    return reversed;
}
