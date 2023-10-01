#include<iostream>
using namespace std;

// Pattern no. 3
//         A
//       A B A
//     A B C B A
//   A B C D C B A
// A B C D E D C B A

int main(){
    int n=5;
    char alpha = 'A';

    // Outer loop for each row
    for(int i=1; i<=n; i++){
        // Loop to print spaces before the characters
        for(int j=n; j>=i; j--){
            cout<<"  "; // Print two spaces
        }
        
        // Loop to print characters in increasing order
        for(int j=1; j<=i; j++){
            cout<<alpha <<" "; // Print the current character followed by a space
            alpha = alpha + 1; // Move to the next character
        }

        alpha = alpha - 1; // Reset alpha to the previous character
        
        // Loop to print characters in decreasing order
        for(int k=1; k<i; k++){
            alpha = alpha - 1; // Move back to the previous character
            cout<<alpha <<" "; // Print the current character followed by a space
        }
        
        alpha = 'A'; // Reset alpha to 'A' for the next row
        cout<<endl; // Move to the next line after each row is printed
    }
}