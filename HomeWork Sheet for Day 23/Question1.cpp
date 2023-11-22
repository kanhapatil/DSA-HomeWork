#include<iostream>
using namespace std;

/* 1. Smallest missing positive number */
int SmallestMissingPositive(int arr[], int n){
    bool present[n+1] = {false};

    for(int i=0; i<n; i++){
        if(arr[i] > 0 && arr[i] <= n){
            present[arr[i]] = true;
        }
    }

    for(int i=1; i<=n; i++){
        if(!present[i]){
            return i;
        }
    }
    return n+1;
}

int main()
{
    int arr[] = {0,-10,1,3,-20};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling function SmallestMissingPositive
    cout<<SmallestMissingPositive(arr, n);
}