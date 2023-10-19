#include<iostream>
using namespace std;

/* 1. Find First and Last Position of Element in Sorted Array */

int FirstAndLastPosition(int arr[], int n, int key){
    int start = 0, end = n-1;
    int first = -1, last = -1;

    // Find First position of element
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key){
            first = mid;
            end = mid - 1;
        }

        else if (arr[mid] < key){
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }
    }

    // Find last position of element
    start = 0;
    end = n-1;
    while(start <= end){
        int mid = start + (end - start) / 2;

        if (arr[mid] == key){
            last = mid;
            start = mid + 1;
        }

        else if (arr[mid] < key){
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }
    }

    cout<<"Start position of " <<key <<" is " <<first <<endl;
    cout<<"End position of " <<key <<" is " <<last;
}

int main(){
    int arr[] = {1, 3, 3, 3, 5, 7, 7, 7, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;

    // Calling function FirstAndLastPosition
    FirstAndLastPosition(arr, n, key);
}