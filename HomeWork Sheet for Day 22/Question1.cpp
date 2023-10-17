#include<iostream>
using namespace std;

/* 1. Take 20 elements from user input and find its sum with the help of an array. */

int main(){
    int arr[100], size, sum=0;
    cout<<"Please enter the size of your array ";
    cin>>size;
    cout<<endl;

    for(int i=0; i<size; i++){
        cout<<"Enter a element for arr index " <<i <<" ";
        cin>>arr[i];
    }

    // Sum of array
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    cout<<sum;
}