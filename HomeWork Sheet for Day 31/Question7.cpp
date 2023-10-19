#include<iostream>
using namespace std;

/* 7. Cube root of a number */

int CubeRoot(int n){
    // Base case 
    if (n == 0){
        return 0;
    }

    int start = 1, end = n, ans = 0;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if (mid == n / mid / mid){
            ans = mid;
            break;
        }

        else if (mid < n / mid / mid) {
            ans = mid;
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }
    }

    return ans;
}

int main(){
    int n = 3;

    // Calling function CubeRoot
    cout<<CubeRoot(n);
}