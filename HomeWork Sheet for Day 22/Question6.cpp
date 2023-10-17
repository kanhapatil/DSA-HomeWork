#include<iostream>
using namespace std;
#include<climits>

/* 6. Find the third smallest element in an array of unique elements size n. 
Where n>3. */

int findThirdLargest(int arr[], int n) {
    if (n < 3) {
        cout << "The array should have at least three elements." << endl;
        return -1;
    }

    int largest = arr[0];
    int secondLargest = INT_MIN;
    int thirdLargest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            thirdLargest = secondLargest;
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            thirdLargest = secondLargest;
            secondLargest = arr[i];
        } else if (arr[i] > thirdLargest && arr[i] < secondLargest) {
            thirdLargest = arr[i];
        }
    }

    if (thirdLargest == INT_MIN) {
        cout << "There is no third largest element." << endl;
        return -1;
    }

    return thirdLargest;
}

int main() {
    int arr[] = {10, 5, 1, 7, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    int thirdLargest = findThirdLargest(arr, n);

    if (thirdLargest != -1) {
        cout << "The third largest element is: " << thirdLargest << endl;
    }

    return 0;
}