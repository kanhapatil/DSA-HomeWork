#include<iostream>
using namespace std;

// Pattern no. 4
// F G H I J K  
// F G H I J K
// F G H I J K
// F G H I J K
// F G H I J K

int main(){
    char alpha = 'F';

    for(int i=1; i<=5; i++){
        for(int j=1; j<=6; j++){
            cout<<alpha <<" ";
            alpha += 1;
        }
        alpha -= 6;
        cout<<endl;
    }
}