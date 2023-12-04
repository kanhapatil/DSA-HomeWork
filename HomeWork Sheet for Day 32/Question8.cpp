#include<iostream>
using namespace std;

/* 8. Search in Rotated Sorted Array II */

int Search2(int arr[], int n, int target){
    int start=0, end=n-1, mid=0;

    while(start <= end){
        mid = start + (end - start) / 2;

        // Base case
        if(arr[mid] == target){
            return true;
        }

        // Check a left part is sorted or not
        else if(arr[mid] > arr[start]){
            // Left part is sorted now
            if(arr[start] <= target && arr[mid] >= target){
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        // Check a right part is sorted or not
        else if(arr[mid] < arr[start]){
            // Right part is sorted now
            if(arr[end] >= target && arr[mid] <= target){
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        // Handle duplicated value
        else {
            start += 1;
        }
    }
    return false;
}

int main(){
    int arr[] = {2,5,6,0,0,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    // Calling function Search2
    cout<<Search2(arr, n, target);
}