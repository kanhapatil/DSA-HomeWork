#include<iostream>
using namespace std;

// 11. Search in Rotated Sorted Array.
// https://leetcode.com/problems/search-in-rotated-sorted-array/

int search(int arr[], int n, int key){
    int start=0, end=n-1;

    while(start <= end){
        int mid = start + (end-start)/2;

        // Base case
        if(arr[mid] == key){
            return mid;
        }

        // Check left part is sorted or not
        else if(arr[mid] >= arr[start]){
            // Now left part is sorted
            if(arr[start] <= key && arr[mid] >= key){
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        else{
            // Now right part is sorted
            if(arr[end] >= key && arr[mid] <= key){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[] = {4,5,6,7,0,1,2};
    int n = sizeof(arr)/sizeof(arr[0]), key=0;

    // Calling function search
    cout<<search(arr,n,key);
}