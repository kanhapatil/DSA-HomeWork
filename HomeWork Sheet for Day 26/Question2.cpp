#include<iostream>
using namespace std;

/* 2. Bubble Sort Algorithm to sort the array of integers in increasing 
order by taking the smallest number to first place by starting from the 
last. Question was explained in the class. */

void BubbleSort(int arr[], int n){
    for(int i=0; i<=n-2; i++){ 
        for(int j=n-1; j>i; j--){ 
            if(arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
        }
    }

    // print array elements
    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    }
}

int main(){
    int arr[] = {7, 4, 8, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling function BubbleSort
    BubbleSort(arr, n);
}