#include<iostream>
using namespace std;

// 5. Kth Missing Positive Number
// https://leetcode.com/problems/kth-missing-positive-number/

int findKthPositive(int arr[], int n, int k){
    int start=0, end=n-1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] - mid - 1 < k){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return start + k;
}

int main(){
    int arr[] = {2,3,4,7,11};
    int n = sizeof(arr)/sizeof(arr[0]), k=5;

    // Calling functions findKthPositive
    cout<<findKthPositive(arr, n, k);
}