#include<iostream>
using namespace std;

/* Print all Odd numbers from 1 to n, take n as an input from the user. */

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i=i+2){
        cout<<i <<" ";
    }
}