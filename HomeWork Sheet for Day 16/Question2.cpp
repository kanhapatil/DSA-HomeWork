#include<iostream>
using namespace std;

/* Question 2: Write a program to convert decimal numbers to binary numbers using a for 
loop. */

int main(){
    int num = 1111, rem, ans = 0, mul=1;

    for(int i=num; i > 0; i = num){
        rem = num % 10;
        num = num / 10;

        ans = rem * mul + ans;
        mul = 2 * mul;
    }
    cout<<ans;
}