#include<iostream>
using namespace std;
#include <climits>

/* 5. Find the second largest element in an array of unique elements of size n. 
Where n>3. */

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        cout << "The array should have at least two elements." << endl;
        return -1;
    }

    int largest = arr[0];
    int secondLargest = INT_MIN; // Initialize to the smallest possible value

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element." << endl;
        return -1;
    }

    return secondLargest;
}

int main() {
    int arr[] = {10, 5, 15, 7, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, n);

    if (secondLargest != -1) {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    return 0;
}