#include<iostream>
using namespace std;

/* 2. Move all zeroes to end of array */
void MoveZeros(int arr[], int n){
    int nonZeroIndex = 0;

    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[nonZeroIndex]);
            nonZeroIndex ++;
        }
    }
    
    // Print array elements
    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    }
}

int main(){
    int arr[] = {3, 5, 0, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling function MoveZeros
    MoveZeros(arr, n);
}