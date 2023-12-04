#include<iostream>
using namespace std;

// 4. Sqrt(x)
// https://leetcode.com/problems/sqrtx/

int mySqrt(int n){
    int start=0, end=n, ans=0;

    while(start <= end){
        int mid = start + (end-start) / 2;

        if(mid == n / mid){
            ans = mid;
            break;
        }
        else if(mid > n / mid){
            end = mid - 1;
        }
        else{
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    int n = 64;

    // Calling functions mySqrt
    cout<<mySqrt(n);
}