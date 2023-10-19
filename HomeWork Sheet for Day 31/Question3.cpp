#include<iostream>
using namespace std;

/* 3. Sqrt(x) */

int Sqrt(int n){
    int start = 0, end = n-1, ans = 0;

    // Base case
    if (n < 2) {
        return n;
    }

    while (start <= end)
    {
        int mid = start + (end - start);

        if (mid == n / mid){
            ans = mid;
            break;
        }

        else if (mid < n / mid){
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
    int n = 81;

    // Calling function Sqrt
    cout<<Sqrt(n);
}