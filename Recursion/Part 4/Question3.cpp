#include<iostream>
using namespace std;

// 3. GCD of two numbers

int gcd(int a, int b){
    // Base case
    if(b == 0){
        return a;
    }
    
    return gcd(b, a % b);
}

int main(){
    int a = 10, b = 20;

    // Calling function gcd
    cout<<gcd(a, b);
}