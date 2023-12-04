#include<iostream>
using namespace std;

// 11. Search in Rotated Sorted Array II
// https://leetcode.com/problems/search-in-rotated-sorted-array-ii/

int search(int arr[], int n, int key){
    int start=0, end=n-1;

    while(start <= end){
        int mid = start + (end-start)/2;

        // Base case
        if(arr[mid] == key){
            return true;
        }

        // Check left part is sorted or not
        else if(arr[mid] > arr[start]){
            // Now left part is sorted
            if(arr[start] <= key && arr[mid] >= key){
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        else if(arr[mid] < arr[start]){
            // Now right part is sorted
            if(arr[end] >= key && arr[mid] <= key){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        else {
            start = start + 1;
        }
    }
    return false;
}

int main(){
    int arr[] = {4,5,6,7,0,1,2};
    int n = sizeof(arr)/sizeof(arr[0]), key=1;

    // Calling function search
    cout<<search(arr,n,key);
}