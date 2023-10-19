#include<iostream>
using namespace std;

/* 5. Count the zeros */

int countZeros(int arr[], int n) {
    int start = 0, end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == 0 && (mid == 0 || arr[mid - 1] == 1)) {
            // Check if it's the first occurrence of 0
            return n - mid;
        } 
        
        else if (arr[mid] == 1) {
            // Move left to find the first 0
            start = mid + 1;
        } 

        else {
            // Move right
            end = mid - 1;
        }
    }
    // If there are no 0's, return 0
    return 0;
}

int main() {
    int arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int zeroCount = countZeros(arr, n);
    cout << "Count of 0's: " << zeroCount << endl;

    return 0;
}