#include<iostream>
using namespace std;

// 3. Write a Table program using recursion. Take input number n, and print its table.

void printTable(int table, int n)
{
    // Base case
    if(n == 10){
        cout<<table <<" * " << n << " = " <<(table * n) <<endl;
        return;
    }

    cout<<table <<" * " << n << " = " <<(table * n) <<endl;
    printTable(table, n+1);
}

int main(){
    int table, n=1;
    cout<<"Enter table number: ";
    cin>>table;

    // Calling function printTable
    printTable(table, n);
}