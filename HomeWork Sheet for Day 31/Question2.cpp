#include<iostream>
using namespace std;

/* 2. Search Insert Position */

int InsertPosition(int arr[], int n, int key){
    int start = 0, end = n-1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key){
            return mid;
        }

        else if (arr[mid] < key){
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }
    }
    return start;
}

int main()
{
    int arr[] = {1, 4, 6, 8, 10, 14, 16, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 6;

    // Calling function InsertPosition
    cout<<InsertPosition(arr, n, key);
}