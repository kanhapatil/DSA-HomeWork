#include<iostream>
using namespace std;

// 1. Fibonacci Number
// https://leetcode.com/problems/fibonacci-number/

int fib(int n){
    // Base case
    if(n <= 1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int main(){
    int n=4;

    // Calling function fib
    cout<<fib(n);
}