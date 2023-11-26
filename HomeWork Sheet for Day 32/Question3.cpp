#include<iostream>
using namespace std;

/* 3. Search in Rotated Sorted Array */

int SearchRotated(int arr[], int n, int key){
    int start=0, end=n-1, mid=0;

    while (start<=end)
    {
        mid = start + (end - start) / 2;

        // Base case
        if(arr[mid] == key){
            return mid;
        }

        // Check left part is sorted or not
        else if(arr[mid] >= arr[start]){
            // Now left part is sorted
            if(arr[mid] > key && arr[start] <= key){
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        else {
            // Now right part is sorted
            if(arr[mid] <= key && arr[end] >= key){
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }
}

int main(){
    int arr[] = {4, 5, 6, 8, 10, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 4;

    // Calling function SearchRotated
    cout<<SearchRotated(arr, n, key);
}