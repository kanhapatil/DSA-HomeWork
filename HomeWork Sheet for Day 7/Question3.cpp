#include<iostream>
using namespace std;

// Pattern no. 3
// 10
// 10 11
// 10 11 12
// 10 11 12 13
// 10 11 12 13 14
// 10 11 12 13 14 15


int main(){
    for(int i=1; i<=6; i++){
        for(int j=1; j<=i; j++){
            cout<<j+9 <<" ";
        }
        cout<<endl;
    }
}