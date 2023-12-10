#include<iostream>
using namespace std;

// 2. Power of Four

int isPowerOfFour(int n){
    
    if (n == 0) {
        return false;
    }
    if (n == 1) {
        return true;
    }
    if (n % 4 != 0) {
        return false;
    }
    return isPowerOfFour(n / 4);
}

int main(){
    int n = 15;

    // Calling function isPowerOfFour
    cout<<isPowerOfFour(n);
}