#include<iostream>
using namespace std;

/* 1. An array is given in decreasing order with Key, Find the index of key, 
if key is not present, print -1 */

int Search(int arr[], int n, int key){
    int start=0, end=n-1, mid=0;

    while (start <= end){
        // Calculate the mid point
        mid = start + (end - start) / 2;

        // Base case
        if(arr[mid] == key){
            return mid;
        }

        // Move to right side
        else if(arr[mid] > key){
            start = mid + 1;
        }

        // Move to left side
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {8,7,6,5,4,3,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 7;

    // Calling functions Search
    cout<<Search(arr,n,key);
}