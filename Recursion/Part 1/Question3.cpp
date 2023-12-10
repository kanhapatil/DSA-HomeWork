#include<iostream>
using namespace std;

// 3. Print all numbers from 1 to n using recursion.

void printOneToN(int n){
    // Base case
    if(n == 0){
        return;
    }

    printOneToN(n-1);
    cout<<n <<" ";
}

int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;

    // Calling function
    cout<<"Print number from 1 to " <<number << " are: ";
    printOneToN(number);
}