#include <iostream>
using namespace std;

// Recursive function to calculate the Nth Fibonacci number
int fibonacci(int n) {
    if (n == 1) return 0; // First Fibonacci number
    if (n == 2) return 1; // Second Fibonacci number
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}

int main() {
    int N;
    cin >> N;             // Input only
    cout << fibonacci(N); // Output only
    return 0;
}
