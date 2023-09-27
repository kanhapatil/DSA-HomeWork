#include<iostream>
using namespace std;

/* Question 5: Print Sum of square of first n natural number. */

// Approach no. 1
int main(){
    int n, sum=0;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        sum = sum + i*i;
        cout<<sum <<" ";
    }
}


// Approach no. 2
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // This is formula
    cout<<(n * (n + 1) * (2*n + 1)) / 6;
}