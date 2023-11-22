#include<iostream>
using namespace std;

/* 1. Use Bubble Sort Algorithm to sort the array of integers in decreasing 
order. */

/*
void BubbleSort(int arr[], int n){
    for(int i=n-2; i>=0; i--){
        for(int j=0; j<=i; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    // print array elements
    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    }
} 
*/

// Adding intelligence to BubbleSort
void BubbleSort(int arr[], int n){
    for(int i=n-2; i>=0; i--){
        bool swapped = 0;
        for(int j=0; j<=i; j++){
            if(arr[j] < arr[j+1]){
                swapped = 1;
                swap(arr[j], arr[j+1]);
            }
        }

        // check swapped
        if(swapped == 0){
            break;
        }
    }

    // print array elements
    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    }
} 

int main(){
    int arr[] = {7, 4, 8, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling function BubbleSort
    BubbleSort(arr, n);
}


