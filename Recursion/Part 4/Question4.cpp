#include<iostream>
using namespace std;

// 4. Count number of hops

int countWays(int n){
    // Base case
    if(n <= 2){
        return n;
    }
    else if(n == 3){
        return 4; // special case
    }

    return countWays(n-1) + countWays(n-2) + countWays(n-3);
}

int main(){
    int n = 4;

    // Calling function
    cout<<countWays(n);
}