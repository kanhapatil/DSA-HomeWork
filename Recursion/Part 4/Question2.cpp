#include<iostream>
using namespace std;

// 2. Climbing Stairs
// https://leetcode.com/problems/climbing-stairs/ 

int climbStairs(int n){
    // Base case
    if(n <= 1){
        return 1;
    }

    return climbStairs(n-1) + climbStairs(n-2);
}

int main(){
    int n = 2;

    // Calling function
    cout<<climbStairs(n);
}