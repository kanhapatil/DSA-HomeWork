#include<iostream>
#include<math.h>
using namespace std;

// 1. Sum of cubes of N natural numbers using Recursion.

int sumOfnCube(int n){
    if(n == 1){
        return 1;
    }
    return pow(n, 3) + sumOfnCube(n-1);
}

int main(){
    int n = 3;

    // Calling function sumOfnCube
    cout<<sumOfnCube(n);
}