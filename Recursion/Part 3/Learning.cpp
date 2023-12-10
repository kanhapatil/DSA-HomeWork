#include<iostream>
#include<math.h>
using namespace std;

// 1. 
// int fact(int n){
//     if(n == 1 || n == 0){
//         return 1;
//     }
//     return n * fact(n-1);
// }

// int main(){
//     int n=5;

//     cout<<fact(n);
// }

// int nsum(int n){
//     if(n == 1){
//         return 1;
//     }

//     return n + nsum(n-1);
// }

// int main(){
//     int n = 10;

//     cout<<nsum(n);
// }


// int power(int n, int p){
//     if (p == 0){
//         return 1;
//     }
//     return n * power(n, p-1);
// }

// int main(){
//     int n = 3, p = 5;

//     cout<<power(n, p);
// }

int squaresum(int n){
    if (n == 1){
        return 1;
    }

    return pow(n, 2) + squaresum(n-1);
}

int main(){
    int n = 4;

    cout<<squaresum(n);
}