#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n) {
    for (int i = n - 2; i >= 0; i--) { 
        int key = arr[i];
        int j = i + 1;

        while (j < n && arr[j] < key) {
            arr[j - 1] = arr[j];
            j++;
        }

        arr[j - 1] = key;
    }

    // print array elements
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {5, 2, 4, 0, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling function InsertionSort
    InsertionSort(arr, n);
    return 0;
}