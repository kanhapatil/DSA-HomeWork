#include<iostream>
using namespace std;

/* 4. Kth Missing Positive Number */

int KthMissingPositive(int arr[], int size, int k) {
    int start = 0, end = size;
    while (start < end) {
        int mid = start + (end - start) / 2;

        // Count the number of missing elements up to the current index
        if (arr[mid] - mid - 1 < k) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    // The Kth missing positive number would be at index (start + k) considering the missing elements
    return start + k;
}

int main() {
    int arr[] = {2, 3, 4, 7, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    // Calling function KthMissingPositive
    cout << KthMissingPositive(arr, size, k) << endl;
    return 0;
}