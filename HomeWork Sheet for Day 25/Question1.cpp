#include<iostream>
using namespace std;

/* 1. Selection Sort Algorithm to sort the array of integers in 
decreasing order. */

void SelectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] > arr[i]){
                swap(arr[j], arr[i]);
            }
        }
    }

    // print array element
    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    }
}

int main(){
    int arr[] = {9, 7, 3, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling function SelectionSort
    SelectionSort(arr, n);
}