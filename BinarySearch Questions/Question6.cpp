#include<iostream>
using namespace std;

// 6. Count the Zeros
// https://practice.geeksforgeeks.org/problems/count-the-zeros2550/1?page=1&difficulty[]=0&category[]=Searching&sortBy=submissions

int countZeroes(int arr[], int n){
    int start=0, end=n-1, lastIndexOne=-1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == 1){
            lastIndexOne = mid;
            start = mid + 1;
        }
        else if(arr[mid] < 1){
            end = mid - 1;
        }
    }
    return n-lastIndexOne-1;
}

int main(){
    int arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Calling functions countZeroes
    cout<<"Total number of zeros are "<<countZeroes(arr, n);
}