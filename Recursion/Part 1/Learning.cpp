#include<iostream>
using namespace std;

void func(int n){
    // Base case
    if(n==0){
        cout << "Happy birthday!" << endl;
        return;
    }

    // Below code is print ..... before calling function
    cout<<n <<" days left for birthday" <<endl; 
    func(n-1);
}

int main(){
    int n = 5;

    // Calling function
    func(n);
}