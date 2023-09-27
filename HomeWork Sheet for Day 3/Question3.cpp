#include<iostream>
using namespace std;

/* Question 3: Take a number in input (ex n) and print the corresponding month to it. 
Ex: for n=1, print january, n=2, print feburary like this you need to give output. 
It is given that n will be greater than 0 and less than 13. */

int main(){
    int n;
    cout<<"Enter a number: ";
    // take input from the user
    cin>>n;

    if (n > 0 && n <= 12){
        if (n == 1)
            cout<<"Jan";
        else if (n == 2)
            cout<<"Fab";
        else if (n == 3)
            cout<<"Mar";
        else if (n == 4)
            cout<<"Apr";
        else if (n == 5)
            cout<<"May";
        else if (n == 6)
            cout<<"Jun";
        else if (n == 7)
            cout<<"Jul";
        else if (n == 8)
            cout<<"Aug";
        else if (n == 9)
            cout<<"Sep";
        else if (n == 10)
            cout<<"Oct";
        else if (n == 11)
            cout<<"Nov";
        else if (n == 12)
            cout<<"Dec";
    }
    else {
        cout<<"Please enter a number in the range of 1 to 12";
    }
}