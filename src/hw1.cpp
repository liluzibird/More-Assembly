#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int convertToDecimal(string binary) {
    int decimalValue = 0;
    int exponent = 0;

    // Start from the rightmost (least significant) bit of the binary string
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            // If the current bit is '1', add 2^power to the decimal value
            decimalValue += static_cast<int>(pow(2, exponent));
        }
        exponent++;
    }

    return decimalValue;
}

int main() {
    cout << "convertToDecimal(\"10101\"): " << convertToDecimal("10101") << endl; // Output: 21
    cout << "convertToDecimal(\"0000000001\"): " << convertToDecimal("0000000001") << endl; // Output: 1
    cout << "convertToDecimal(\"1111111111\"): " << convertToDecimal("1111111111") << endl; // Output: 1023

    return 0;
}
