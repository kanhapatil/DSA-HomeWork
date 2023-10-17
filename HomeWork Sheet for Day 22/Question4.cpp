#include<iostream>
using namespace std;

/* 4. Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element 
of the arrays. */

int main(){
    char arr[100], alpha = 'a';

    for(int i=0; i<26; i++){
        cin>>arr[i];
    }

    for(int i=0; i<26; i++){
        cout<<arr[i] <<" ";
    }
}