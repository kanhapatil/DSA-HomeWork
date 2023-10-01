#include<iostream>
using namespace std;

// Pattern no. 4
//         *
//       *   *
//     *   *  *
//   *   *   *   *
// *   *   *   *   *
// *   *   *   *   *
//   *   *   *   *
//     *   *   *  
//       *   *  
//         *

int main(){
    int n=5;

    // Upper part of the pattern
    for(int i=1; i<=n; i++){
        // Loop to print spaces before the stars
        for(int j=n; j>=i; j--){
            cout<<" "; // Print a space
        }

        // Loop to print stars in increasing order
        for(int k=1; k<=i; k++){
            cout<<"* "; // Print a star followed by a space
        }
        
        cout<<endl; // Move to the next line after each row in the upper part is printed
    }

    // Lower part of the pattern
    for(int i=n; i>=1; i--){
        // Loop to print spaces before the stars in the lower part
        for(int j=n; j>i; j--){
            cout<<" "; // Print a space
        }

        // Loop to print stars in decreasing order in the lower part
        for(int k=1; k<=i; k++){
            cout<<" *"; // Print a space followed by a star
        }
        
        cout<<endl; // Move to the next line after each row in the lower part is printed
    }
}