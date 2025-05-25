#include <iostream>
#include <vector>
using namespace std;

// This function checks if array A is a palindrome from index 'start' to 'end'
bool isPalindrome(const vector<int>& A, int start, int end) {
    // Base case: if start meets or crosses end, it's a palindrome
    if (start >= end)
        return true;

    // If the current pair is not equal, it's not a palindrome
    if (A[start] != A[end])
        return false;

    // Move to the next pair
    return isPalindrome(A, start + 1, end - 1);
}

int main() {
    int N;
    cin >> N; // Read the number of elements

    vector<int> A(N); // Create an array of size N

    // Read N numbers into the array
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Check if the array is a palindrome using the recursive function
    if (isPalindrome(A, 0, N - 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
