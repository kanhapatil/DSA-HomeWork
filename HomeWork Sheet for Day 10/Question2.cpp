#include<iostream>
using namespace std;

// Pattern no. 2
//         A
//       B B
//     C C C
//   D D D D
// E E E E E


int main(){
    char alpha = 'A';
    int n = 5;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            // print space
            cout<<"  ";
        }

        for(int k=1; k<=i; k++){
            // print alphabets
            cout<<alpha <<" ";
        }
        alpha = alpha + 1;
        cout<<endl;
    }
}