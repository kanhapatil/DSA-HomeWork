#include<iostream>
using namespace std;

// 7. Number of occurrence
// https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

int countOccurrences(int arr[], int n, int X){
    int start=0, end=n-1, lindex=-1, rindex=-1;

    // Find the first occurrence of X
    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == X){
            lindex = mid;
            end = mid - 1;
        }
        else if(arr[mid] > X){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    // Find the last occurrence of X
    start=0, end=n-1;
    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == X){
            rindex = mid;
            start = mid + 1;
        }
        else if(arr[mid] > X){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return rindex - lindex + 1;
}

int main(){
    int arr[] = {1, 1, 2, 2, 2, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]), X=3;

    // Calling functions countOccurrences
    cout<<"Total occurrences " <<X <<" is " <<countOccurrences(arr, n, X);
}