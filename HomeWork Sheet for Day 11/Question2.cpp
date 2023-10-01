#include<iostream>
using namespace std;

// Pattern no. 2
//         1
//       1 2 3
//     1 2 3 4 5
//   1 2 3 4 5 6 7
// 1 2 3 4 5 6 7 8 9

int main(){
    int n=5;

    // Outer loop for each row
    for(int i=1; i<=n; i++){
        // Loop to print spaces before the numbers
        for(int j=n; j>=i; j--){
            cout<<"  "; // Print two spaces
        }
        
        // Loop to print numbers in increasing order
        for(int k=1; k<=i+i-1; k++){
            cout<<k <<" "; // Print the current number followed by a space
        }
        
        cout<<endl; // Move to the next line after each row is printed
    }
}