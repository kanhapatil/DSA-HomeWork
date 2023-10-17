#include<iostream>
#include<cmath>
using namespace std;

/* Question 5: Write a program to convert binary to Octal numbers */

int binaryToDecimal(int binary) {
    int decimal = 0, base = 0;
    while (binary > 0) {
        int digit = binary % 10;
        decimal += digit * pow(2, base);
        binary /= 10;
        base++;
    }
    return decimal;
}

// Function to convert decimal to octal
int decimalToOctal(int decimal) {
    int octal = 0, octalDigit, i = 1;
    while (decimal > 0) {
        octalDigit = decimal % 8;
        octal += octalDigit * i;
        decimal /= 8;
        i *= 10;
    }
    return octal;
}

int main() {
    int binaryNumber;
    
    cout << "Enter a binary number: ";
    cin >> binaryNumber;
    
    int decimalNumber = binaryToDecimal(binaryNumber);
    int octalNumber = decimalToOctal(decimalNumber);
    
    cout << "Octal equivalent: " << octalNumber << endl;

    return 0;
}