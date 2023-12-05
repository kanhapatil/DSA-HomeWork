#include<iostream>
using namespace std;

// 2. Print all odd number from n to 1 using recursion.

void printOddNumber(int n){
    // Base case
    if(n < 1){
        return;
    }

    if(n % 2 != 0){
        cout<<n <<" ";
    }
    printOddNumber(n-1);
}

int main(){
    int number;
    cout<<"Enter number : ";
    cin>>number;

    // Calling function printOddNumber
    cout<<"Odd number from " <<number << " to 1 are : "; 
    printOddNumber(number);
}