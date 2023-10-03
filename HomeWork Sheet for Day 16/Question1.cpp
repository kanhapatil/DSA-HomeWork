#include<iostream>
using namespace std;

/* Question 1: Write a program to convert binary numbers to decimal numbers using a for 
loop. */

int main() {
    int num = 2;
    int rem, ans = 0, mul = 1;

    for (int i = num; i > 0; i = num) {
        rem = num % 2;
        num = num / 2;

        ans = rem * mul + ans;
        mul = mul * 10;
    }

    cout << ans << endl;
}