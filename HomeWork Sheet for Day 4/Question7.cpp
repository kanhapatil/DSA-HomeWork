#include <iostream>
using namespace std;

/* Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the 
user. */

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=4; i<=n; i=i+4){
        cout<<i <<' ';
    }
}