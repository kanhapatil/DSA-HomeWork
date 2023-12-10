#include<iostream>
using namespace std;

// 2. Print all numbers from 10 to n using recursion, where n will be greater than 10.

void printTenToN(int ten, int n){
    // Base case
    if(ten == n){
        cout<<ten;
        return;
    }

    cout<<ten <<" ";
    printTenToN(ten+1, n);
}

int main(){
    int ten=10, n;
    cout<<"Enter a number: ";
    cin>>n;

    // Calling function printTenToN
    printTenToN(ten, n);
}