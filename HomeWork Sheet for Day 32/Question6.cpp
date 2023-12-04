#include<iostream>
using namespace std;

/* 6. Valid Perfect Square */

bool isPerfectSquare(int num) {
    int start=0, end=num, ans=0;

    while(start <= end){
        long long mid = start + (end - start) / 2;
        long long square = mid * mid;

        if(square == num){
            return true;
        }
        else if(square < num){
            start = mid + 1;
        }
        else {
            end = mid  - 1;
        }
    }
    return false;
}


int main(){
    int num = 8;

    // Calling function isPerfectSquare
    cout<<isPerfectSquare(num);
}