#include<iostream>
using namespace std;

// Pattern no. 4
// A B C D
// A B C
// A B
// A

int main(){
    char alpha = 'A';

    for(int i=4; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<alpha <<" ";
            alpha = alpha + 1;
        }
        alpha = alpha - i;
        cout<<endl;
    }
}