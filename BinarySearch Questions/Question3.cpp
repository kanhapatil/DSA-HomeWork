#include<iostream>
using namespace std;

// 3. Find First and Last Position of Element in Sorted Array.
// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

void searchRange(int arr[], int n, int target){
    int start=0, end=n-1, lindex=-1, rindex=-1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == target){
            lindex = mid;
            end = mid - 1;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    start=0, end=n-1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == target){
            rindex = mid;
            start = mid + 1;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    // first and last positions of target
    cout<<lindex <<" " <<rindex;
}

int main(){
    int arr[] = {5,7,7,8,8,10};
    int n = sizeof(arr)/sizeof(arr[0]), target=5;

    // Calling functions searchRange
    searchRange(arr, n, target);
}