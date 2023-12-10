#include<iostream>
using namespace std;

// 1. Print "Coder Army" 10 times using recursion.

void printCoderArmry(int n){
    // Base case
    if(n == 0){
        return;
    }
    
    cout<<"Coder Army" <<endl;
    printCoderArmry(n-1);
}

int main(){
    int n=10;

    // Calling function printCoderArmry
    printCoderArmry(n);
}