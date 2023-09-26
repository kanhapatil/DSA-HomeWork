#include<iostream>
using namespace std;

// Pattern no. 2
// A
// A B
// A B C
// A B C D
// A B C D E


int main(){
    char alpha = 'A';

    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<alpha <<" ";
            alpha = alpha + 1;
        }
        alpha = alpha - i;
        cout<<endl;
    }
}