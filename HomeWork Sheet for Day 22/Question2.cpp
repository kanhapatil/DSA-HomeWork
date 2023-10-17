#include<iostream>
using namespace std;

/* 2. Calculate the average of elements in an array of size 18. */

int main(){
    int arr[100], size, avg=0;
    cout<<"Please enter the size of your array ";
    cin>>size;
    cout<<endl;

    for(int i=0; i<size; i++){
        cout<<"Enter a element for arr index " <<i <<" ";
        cin>>arr[i];
    }

    // Calculate the average of array
    for(int i=0; i<size; i++){
        avg += arr[i];
    }
    cout<<avg/size;
}