#include<iostream>
using namespace std;

// Pattern no. 1
//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1          


int main(){
    int n=5;

    for(int i=1; i<=5; i++){
        for(int j=1; j<=n-i; j++){
            // print space
            cout<<"  ";
        }

        for(int k=i; k>=1; k--){
            // print reverse count
            cout<<k <<" ";
        }
        cout<<endl;
    }
}