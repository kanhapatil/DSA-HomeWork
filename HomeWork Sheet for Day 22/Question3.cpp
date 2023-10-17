#include<iostream>
using namespace std;

/* 3. Find the index of a specific element in an array, if the element is not present, 
print -1. Ask the size of the array from the user and then implement it. */

int main(){
    int arr[100], size, n, index=-1;
    bool flag=false;

    cout<<"Please enter the size of your array ";
    cin>>size;
    cout<<endl;

    for(int i=0; i<size; i++){
        cout<<"Enter a element for arr index " <<i <<" ";
        cin>>arr[i];
    }
    
    cout<<endl;
    cout<<"Enter the element, I will give the index of that element if present : ";
    cin>>n;

    for(int i=0; i<size; i++){
        if(arr[i] == n){
            flag = true;
            index = i;
            break;
        }
    }

    if(flag == true){
        cout<<index;
    }
    else{
        cout<<index;
    }
}