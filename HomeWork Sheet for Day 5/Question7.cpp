#include<iostream>
using namespace std;

/* Question 7: Print n’th Fibonacci number. */

int main() {
    int n, first = 0, second = 1, next = 0;

    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
    }
    else if (n == 1) {
        cout << first;
    }
    else if (n == 2) {
        cout << second;
    }
    else if (n > 2) {
        for (int i = 3; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next;
    }
    return 0;
}