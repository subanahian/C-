#include <bits/stdc++.h>
using namespace std;
void printPyramid(int N) {
    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int j = 0; j < N - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}
int main() {
    int N;
    cin >> N;
    printPyramid(N);
    return 0;
}
