#include<iostream>
using namespace std;

/* 3. Bubble Sort Algorithm to sort the array of char in ascending order. */

void BubbleSort(char arr[], int n){
    for(int i=n-2; i>=0; i--){
        bool swapped = 0;
        for(int j=0; j<=i; j++){
            if(arr[j] > arr[j+1]){
                swapped = 1;
                swap(arr[j], arr[j+1]);
            }
        }

        // check swapped
        if(swapped == 0){
            break;
        }
    }

    // print arr elements
    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    }
}

int main(){
    char arr[] = {'e', 'a', 'b', 'f', 'd', 'c'};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling function BubbleSort
    BubbleSort(arr, n);
}