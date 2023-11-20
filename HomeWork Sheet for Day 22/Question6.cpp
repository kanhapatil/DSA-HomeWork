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

    // Find smallest element
    int smallest = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    // Find secondSmallest element
    int secondSmallest = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i] < secondSmallest && arr[i] > smallest){
            secondSmallest = arr[i];
        }
    }

    // Find thirdSmallest element
    int thirdSmallest = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i] < thirdSmallest && arr[i] > secondSmallest){
            thirdSmallest = arr[i];
        }
    }
    
    return thirdSmallest;
}

int main() {
    int arr[] = {10, 5, 1, 7, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    int thirdLargest = findThirdLargest(arr, n);

    if (thirdLargest != -1) {
        cout << "The third smallest element is: " << thirdLargest << endl;
    }

    return 0;
}