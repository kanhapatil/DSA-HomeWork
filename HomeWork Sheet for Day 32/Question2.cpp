#include<iostream>
using namespace std;

/* 2. Find Minimum in Rotated Sorted Array */

int FindMin(int arr[], int n){
    int start=0, end=n-1, mid=0, ans=0;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if(arr[mid] > arr[0]){
            start = mid + 1;
        }

        else {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {4, 5, 6, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling function FindMin
    cout<<FindMin(arr, n);
}