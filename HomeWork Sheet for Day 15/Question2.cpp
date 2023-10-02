#include<iostream>
using namespace std;

/* 2. Find the factorial of a number n using a while loop and do a while loop. */

// Using while loop
int main(){
    int n, i=1;
    cout<<"Enter a number: ";
    cin>>n;

    while(i<=n){
        if(n % i == 0){
            cout<<i <<endl;
        }
        i++;
    }
}


// Using do while loop
int main(){
    int n, i=1;
    cout<<"Enter a number: ";
    cin>>n;

    do{
        if(n % i == 0){
            cout<<i <<endl;
        }
        i++;
    }while(i<=n);
}