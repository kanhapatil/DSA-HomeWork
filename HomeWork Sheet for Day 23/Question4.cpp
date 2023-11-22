#include<iostream>
using namespace std;

/* 4. Count number of elements between two given elements in array */
int CountBetween(int arr[], int n, int num1, int num2){
    int firstIndex = 0, lastIndex = 0;

    // find num1 index
    for(int i=0; i<n; i++){
        if(arr[i] == num1){
            firstIndex = i;
            break;
        }
    }

    // find num2 index
    for(int j = n-1; j>=0; j--){
        if(arr[j] == num2){
            lastIndex = j;
            break;
        }
    }

    int ans = lastIndex - firstIndex - 1;
    return ans;
}

int main(){
    int arr[] = {4, 2, 1, 10, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num1 = 4, num2 = 6;

    // Calling function CountBetween
    cout<<CountBetween(arr, n, num1, num2);
}