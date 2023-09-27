#include<iostream>
using namespace std;

/* Question 4: There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So 
print all the numbers from 220 to 730 which follow the AP. */

int main(){
    for(int start=220; start<=730; start=start + 220){
        cout<<start <<" ";
    }
}