#include<iostream>
using namespace std;

/* 4. Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, 
print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here) */

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    switch(n){
        case 1:
            cout<<"Jan";
            break;

        case 2:
            cout<<"Feb";
            break;

        case 3:
            cout<<"Mar";
            break;

        case 4:
            cout<<"Apr";
            break;

        case 5:
            cout<<"May";
            break;

        case 6:
            cout<<"Jun";
            break;

        case 7:
            cout<<"July";
            break;

        case 8:
            cout<<"Aug";
            break;

        case 9:
            cout<<"Sep";
            break;

        case 10:
            cout<<"Oct";
            break;

        case 11:
            cout<<"Nov";
            break;

        case 12:
            cout<<"Dec";
            break;

        default:
            cout<<"Enter a number between 1 to 12";
            break;
    }
}