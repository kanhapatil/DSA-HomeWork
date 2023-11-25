#include<iostream>
using namespace std;

/* 5. Count the zeros */

int countZeros(int arr[], int n) {
    int start = 0, end = n - 1;
    int firstZero = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == 0) {
            firstZero = mid;
            end = mid - 1; // Continue searching towards the left
        } else {
            start = mid + 1;
        }
    }

    // If no zero found, return 0
    return (firstZero == -1) ? 0 : (n - firstZero);
}

int main() {
    int arr[] = {1, 1, 1, 1, 0, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int zeroCount = countZeros(arr, n);
    cout << "Count of 0's: " << zeroCount << endl;

    return 0;
}
