#include<iostream>
using namespace std;

/* 6. Number of occurrence */

int CountOccurrence(int arr[], int n, int key){
    int start = 0, end = n-1;
    int first = -1, last = -1;

    // Find first position
    while(start <= end){
        int mid = start + (end - start);

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

    // Find last position
    start = 0, end = n-1;
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

    // We have first and last occurrence of an element
    // So, now we can calculate of count of an element using first and last occurrence
    // Formula : first - last + 1
    int result = last - first + 1;
    return result;
}

int main(){
    int arr[] = {1, 2, 2, 2, 3, 3, 4, 4, 4, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 6;

    // Calling function CountOccurrence
    cout<<"Occurrences of " <<key <<" is " <<CountOccurrence(arr, n, key);
}