#include<iostream>
using namespace std;

/* 6. Give a number n, find if it is prime or not, use a while loop and break here to 
solve it. */

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is not a prime number." << endl;
    } else {
        bool isPrime = true;
        int divisor = 2;

        while (divisor * divisor <= n) {
            if (n % divisor == 0) {
                isPrime = false;
                break; // If a divisor is found, exit the loop
            }
            divisor++;
        }

        if (isPrime) {
            cout << n << " is a prime number." << endl;
        } else {
            cout << n << " is not a prime number." << endl;
        }
    }
}