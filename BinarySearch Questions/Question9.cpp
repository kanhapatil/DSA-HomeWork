#include<iostream>
using namespace std;

// 9. Peak Index in a Mountain Array
// https://leetcode.com/problems/peak-index-in-a-mountain-array/

int peakIndexInMountainArray(int arr[], int n){
    int start=0, end=n-1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        // Base case
        if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]){
            return mid;
        }

        // Move to right
        else if(arr[mid] > arr[mid - 1]){
            start = mid + 1;
        }

        // Move to left
        else {
            end = mid - 1;
        }
    }
}

int main(){
    int arr[] = {0,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Calling functions peakIndexInMountainArray
    cout<<"Peak index in mountain array is " <<peakIndexInMountainArray(arr, n);
}