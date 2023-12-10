#include<iostream>
using namespace std;

// 1. Print all odd numbers from 1 to n using recursion.

// Method 1
// void printOdd(int n, int num){
//     // Base case
//     if(n > num){
//         return;
//     }
//     cout<<n <<" ";
//     printOdd(n + 2, num);
// }


// Method 2
void printOdd(int num){
    // Base case 
    if(num < 1){
        return;
    }

    printOdd(num - 2);
    cout<<num <<" ";
}

int main(){
    int num, n=1;
    cout<<"Enter number: ";
    cin>>num;

    // Calling function printOdd from 1 to n.
    printOdd(num);
}