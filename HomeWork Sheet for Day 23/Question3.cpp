#include<iostream>
using namespace std;

/* 3. Number of occurrence */
int CountN(int arr[], int n, int key){
    int count = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == key){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[] = {1, 1, 2, 2, 2, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 1;

    // Calling function CountN
    cout<<CountN(arr, n, key);
}