#include<iostream>
using namespace std;

int SearchInsertPosition(int arr[], int n, int key){
    int start = 0, end = n;

    while (start <= end)
    {
        int mid = (start + end) / 2;

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

int main(){
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0])-1;
    int key = 0;

    // Calling function SearchInsertPosition
    cout<<SearchInsertPosition(arr, n, key);
}