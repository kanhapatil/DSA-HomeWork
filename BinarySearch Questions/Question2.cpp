#include<iostream>
using namespace std;

// 2. Search Insert Position
// https://leetcode.com/problems/search-insert-position/

int searchInsert(int arr[], int n, int target){
    int start=0, end=n-1, mid=0;

    // Base case
    if(target > arr[n-1]){
        return n;
    }

    while(start <= end){
        mid = start + (end-start) / 2;

        if(arr[mid] == target){
            return mid;
        }

        else if(arr[mid] > target){
            end = mid - 1;
        }

        else {
            start = mid + 1;
        }
    }
    return start;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]), target=3;

    // Calling functions searchInsert
    cout<<searchInsert(arr, n, target);
}