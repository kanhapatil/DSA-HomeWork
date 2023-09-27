#include<iostream>
using namespace std;

/* Question 6: Print Sum of cube of first n natural number */

// Approach no. 1
int main(){
    int n, sum=0;

    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        sum = sum + i*i*i;
    }
    cout<<sum;
}


// Approach no. 2
int main(){
    int n, sum;
    cout<<"Enter a number: ";
    cin>>n;

    // This is formula
    sum = n * (n + 1) / 2;
    sum = sum * sum;

    cout<<sum;
 }