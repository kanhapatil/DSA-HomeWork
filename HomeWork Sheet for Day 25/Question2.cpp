#include<iostream>
using namespace std;

/* 2. Selection Sort Algorithm to sort the array of integers in increasing 
order by taking the highest number to last place. Question was explained 
in the class */

void SelectionSort(int arr[], int n){
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
    int arr[] = {9, 7, 3, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling function SelectionSort
    SelectionSort(arr, n);
}