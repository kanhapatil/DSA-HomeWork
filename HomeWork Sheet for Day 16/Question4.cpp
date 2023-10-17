#include<iostream>
using namespace std;

/* Question 4: Write a program to convert Octal numbers to decimal numbers. */

int main(){
    int num = 15, rem, ans = 0, mul = 1;

    while(num > 0){
        rem = num % 10;
        num /= 10;

        ans = rem * mul + ans;
        mul = mul * 8;
    }
    cout<<ans;
}