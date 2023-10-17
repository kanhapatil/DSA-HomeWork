#include<iostream>
using namespace std;

// Question 2: 

int main(){
    int year = 2024;

    if(year % 400 == 0){
        cout<<"Leap Year";
    }
    else if (year % 4 == 0 && year % 100 != 0){
        cout<<"Leap Year";
    }
    else{
        cout<<"Not Leap Year";
    }
}