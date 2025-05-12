#include <bits/stdc++.h> 
using namespace std;

int A[1005]; 
void printEvenReverse(int i) {
    if (i < 0) return; 
    if (i % 2 == 0) {
        cout << A[i] << " ";
    }
    printEvenReverse(i - 1); 
}
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i]; 
    }
    printEvenReverse(N - 1); 
    return 0;
}
