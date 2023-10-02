#include<iostream>
using namespace std;

/* 5. Print all the Capital and small letters  using a while loop. It means A-Z, 
then a-z. */

// A-Z
int main() {
   char alpha = 'A';
   int n=26, i=1;
   
   while(i <= n){
    cout<<alpha <<endl;
    alpha ++;
    i++;
   }
}

// a-z
int main() {
   char alpha = 'a';
   int n=26, i=1;
   
   while(i <= n){
    cout<<alpha <<endl;
    alpha ++;
    i++;
   }
}