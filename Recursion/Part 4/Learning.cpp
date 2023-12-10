#include<iostream>
using namespace std;

// nth Fibonacci series
// int nthFibonacci(int n){
//     if(n <= 1){
//         return n;
//     }

//     return nthFibonacci(n-1) + nthFibonacci(n - 2);
// }

// int main(){
//     int n = 4;

//     // Calling function
//     cout<<nthFibonacci(n);
// }


// void printFibonacci(int n, int a = 0, int b = 1) {
//     if (n > 0) {
//         cout << a << " ";
//         printFibonacci(n - 1, b, a + b);
//     }
// }

// int main() {
//     int n = 10; // Change this to print Fibonacci numbers till a different number

//     cout << "Fibonacci series till the " << n << "th number: ";
//     printFibonacci(n);

//     return 0;
// }



// nth stair
// int nthStair(int n){
//     if(n <= 1){
//         return 1;
//     }
//     else if(n == 2){
//         return 2;
//     }
//     return nthStair(n-1) + nthStair(n-2);
// }

// int main(){
//     int n = 5;

//     cout<<nthStair(n);
// }


// GCD of 2 number
int gcd(int a, int b){
    if(b == 0){
        return a;
    }

    gcd(b, a % b);
}

int main(){
    int a = 12, b = 39;

    cout<<gcd(a, b);
}