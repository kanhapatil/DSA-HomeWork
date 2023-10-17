#include<iostream>
using namespace std;

/* Question 1: Write a program to convert binary numbers to decimal numbers using a for 
loop. */

#include <iostream>
using namespace std;

int main() {
    int num = 1001;
    int rem, ans = 0, mul = 1;

    while (num > 0) { // Use a while loop instead of a for loop
        rem = num % 10; // Get the last digit of the binary number
        num = num / 10; // Remove the last digit

        ans = rem * mul + ans;
        mul = mul * 2; // Multiply by 2, not 10, to convert to decimal
    }

    cout << ans << endl;
}
