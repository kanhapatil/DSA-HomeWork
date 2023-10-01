#include<iostream>
using namespace std;

// Pattern no. 1
//         *
//       *   *
//     *   *   *
//   *   *   *   *
// *   *   *   *   *  

int main(){
    int n=5;

    // Outer loop for each row
    for(int i=1; i<=n; i++){
        // Loop to print spaces before the stars
        for(int j=n; j>=i; j--){
            cout<<" "; // Print a space
        }

        // Loop to print stars in increasing order
        for(int k=1; k<=i; k++){
            cout<<"* "; // Print a star followed by a space
        }

        cout<<endl; // Move to the next line after each row is printed
    }
}