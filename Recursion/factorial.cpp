#include <bits/stdc++.h>
using namespace std;

// Recursive function to calculate factorial of a number
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n = 3;

    // Call the factorial function and print the result
    cout << factorial(n) << endl;

    return 0;
}