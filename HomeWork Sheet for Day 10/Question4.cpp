#include<iostream>
using namespace std;

// Pattern no. 4
//         E
//       E D
//     E D C
//   E D C B
// E D C B A


int main(){
    char alpha = 'E';
    int n = 5;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            // print space
            cout<<"  ";
        }

        for(int k=1; k<=i; k++){
            // print alphabets
            cout<<alpha <<" ";
            alpha = alpha - 1;
        }
        alpha = 'E';
        cout<<endl;
    }
} 