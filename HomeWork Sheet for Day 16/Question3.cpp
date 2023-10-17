#include<iostream>
using namespace std;

/* Question 3: Write a program to convert decimal numbers to Octal numbers. */

int main(){
    int num = 13, rem, ans = 0, mul = 1;

    while(num > 0){
        rem = num % 8; // Get the remainder when divided by 8
        num /= 8; // Divide the number by 8 
        
        ans = rem * mul + ans;
        mul = mul * 10; // Multiply by 10, to construct the octal number.
    }
    cout<<ans;
}