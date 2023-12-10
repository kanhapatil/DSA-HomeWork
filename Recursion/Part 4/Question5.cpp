#include<iostream>
using namespace std;

// 5. Fibonacci Series up to Nth term

void fibSeries(int n, int a, int b){
    if(n > 0){
        cout<<a <<" ";
        fibSeries(n-1, b, a+b);
    }
}

int main(){
    int n = 5, a = 0, b = 1;

    // Calling function fibSeries
    fibSeries(n, a, b);
}