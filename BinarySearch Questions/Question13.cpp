#include<iostream>
using namespace std;

// 13. Valid Perfect Square
// https://leetcode.com/problems/valid-perfect-square/

int isPerfectSquare(int n){
    int start=0, end=n-1;

    while(start <= end){
        long long mid = start + (end - start) / 2;
        long long square = mid * mid;

        if(square == n){
            return true;
        }
        else if(square > n){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return false;
}

int main(){
    int n = 14;

    // Calling function isPerfectSquare
    cout<<isPerfectSquare(n);
}