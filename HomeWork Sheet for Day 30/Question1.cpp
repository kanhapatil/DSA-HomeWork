#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;

    while(start <= end){
        int mid = (start + end) / 2;

        if (arr[mid] == key){
            return 1;
        }

        else if(arr[mid] > key){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 45;

    // Calling function BinarySearch
    cout<<BinarySearch(arr, n, key);
}