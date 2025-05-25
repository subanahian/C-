#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const vector<int>& A, int start, int end) {
    if (start >= end)
        return true;
    if (A[start] != A[end])
        return false;
    return isPalindrome(A, start + 1, end - 1);
}
int main() {
    int N;
    cin >> N; 
    vector<int> A(N); 
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    if (isPalindrome(A, 0, N - 1)) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}
