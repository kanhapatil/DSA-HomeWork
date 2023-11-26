#include<iostream>
using namespace std;

/* 4. Kth Missing Positive Number */

int FindKthPositive(int arr[], int n, int k){
    int start=0, end=n-1, mid=0;

    while(start < end){
            int mid = start + (end - start) / 2;

            if(arr[mid] - mid - 1 < k){
                start = mid + 1;
            }
            else {
                end = mid;
            }
        }
    return start + k;
}

int main(){
    int arr[] = {2, 3, 4, 7, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;

    // Calling function FindKthPositive
    cout<<FindKthPositive(arr, n, k);
}