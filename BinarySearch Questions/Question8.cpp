#include<iostream>
using namespace std;

// 8. Cube root of an number.
// https://practice.geeksforgeeks.org/problems/cube-root-of-a-number0915/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

int cubeRoot(int n){
    int start=0, end=n, ans=0;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(mid <= n / mid / mid){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n = 27;

    // Calling functions cubeRoot
    cout<<"Cube Root of " <<n << " is " <<cubeRoot(n);    
}