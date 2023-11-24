#include<iostream> 
using namespace std; 

/* 1. Use Insertion Sort Algorithm to sort the array of 
integers in decreasing order. */ 

void InsertionSort(int arr[], int n){ 
    for(int i=1; i<n; i++){ 
        for(int j=i; j>0; j--){ 
            if(arr[j] > arr[j-1]){ 
                swap(arr[j-1], arr[j]); 
            } 
            else{ 
                break;
            }
        }
    }

    // print array elements
    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    }
}

int main(){
    int arr[] = {5, 2, 4, 0, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling function InsertionSort
    InsertionSort(arr, n);
}