#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {1, 2, 3, 4, 5};

    arr.push_back(6);
    arr.pop_back();
    arr.clear();
    
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i] <<" ";
    }
}