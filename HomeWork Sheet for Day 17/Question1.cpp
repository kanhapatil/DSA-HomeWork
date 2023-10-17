#include<iostream>
using namespace std;

// Question 1: Add Digits

int main(){
    int num = 13;

    while(num >= 10){
        num = (num % 10) + (num / 10);
    }
    cout<<num;
}