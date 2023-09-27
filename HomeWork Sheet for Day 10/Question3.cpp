#include<iostream>
using namespace std;

// Pattern no. 3
//         5
//       5 4
//     5 4 3
//   5 4 3 2 
// 5 4 3 2 1


int main(){
    int n = 5;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            // print space
            cout<<"  ";
        }

        for(int k=n; k>n-i; k--){
            // print count
            cout<<k <<" ";
        }
        cout<<endl;
    }
}