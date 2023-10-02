#include<iostream>
using namespace std;

/* 1. Take a number n from the user and print all the even numbers between 1 and 
n(inclusive). Do this using while and do while loop separately. */

// Using while loop
int main(){
    int n, i=1;
    cout<<"Enter a number: ";
    cin>>n;

    while(i<=n){
        cout<<i <<endl;
        i++;
    }
}


// Using do while loop
int main(){
    int n, i=1;
    cout<<"Enter a number: ";
    cin>>n;

    do {
        cout<<i<<endl;
        i++;
    }while(i<=n);
}