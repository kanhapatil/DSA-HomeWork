#include<iostream>
using namespace std;

/* 5. Find Peak Element 2 */

int findPeakElement(int arr[], int n) {
    int start = 0, end = n-1, mid=0;

    while(start <= end){
        mid = end + (start - end) / 2;

        // Find mountain array element
        if((mid == 0 || arr[mid] > arr[mid-1]) && (mid == n-1 ||arr[mid] > arr[mid+1])){
            return mid;
        }

        // Move to right
        else if(arr[mid] > arr[mid-1]){
            start = mid + 1;
        }

        // Move to left
        else {
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {4, 5, 6, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling function findPeakElement
    cout<<findPeakElement(arr, n);
}