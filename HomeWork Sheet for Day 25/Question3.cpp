#include<iostream>
using namespace std;

/* 3. Selection Sort Algorithm to sort the array of char in ascending order. */

void SelectionSort(char arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }

    // print array element
    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    }
}

int main(){
    char arr[] = {'a', 'd', 'e', 'b', 'c'};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling function SelectionSort
    SelectionSort(arr, n);
}