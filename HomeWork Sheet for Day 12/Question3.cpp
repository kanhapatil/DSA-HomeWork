#include<iostream>
using namespace std;

/* 3: Age Check: Implement a program that checks if a person is a teenager. A teenager is 
someone whose age is between 13 and 19 (inclusive). */

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age >= 13 && age < 19){
        cout<<"Teenager";
    }
    else{
        cout<<"No";
    }
}