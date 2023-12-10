#include <iostream>
using namespace std;

// Function to check if a number is prime or not using recursion
bool isPrime(int n, int divisor) {
    // Base cases
    if (n <= 2) {
        return (n == 2);
    }
    if (divisor == 1) {
        return true;
    }

    // If the number is divisible by the divisor, it's not prime
    if (n % divisor == 0) {
        return false;
    }

    // Recursively check with the next divisor
    return isPrime(n, divisor - 1);
}

int main() {
    int number = 4; // Change this number to check for different values

    // Calling the function to check if the number is prime
    if (isPrime(number, number - 1)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }
}
