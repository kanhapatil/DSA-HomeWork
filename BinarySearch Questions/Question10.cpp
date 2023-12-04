#include<iostream>
using namespace std;

// 10. Find Minimum in Rotated Sorted Array

int findMin(int arr[], int n){
    int start=0, end=n-1, ans=0;

    while(start <= end){
        int mid = start + (end - start) / 2;

        // Base case
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else if(arr[mid] < arr[0]){
            ans = mid;
            end = mid - 1;
        }
    }

    return ans;
}

int main(){
    int arr[] = {3,4,5,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Calling functions findMin
    cout<<"Min element index in rotated Sorted Array is " <<findMin(arr, n);
}