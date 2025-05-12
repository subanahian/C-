#include <bits/stdc++.h> 
using namespace std;

void printBinary(int n) {
    if (n == 0) return;
    printBinary(n / 2);
    cout << n % 2;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        if (N == 0)
            cout << 0;
        else
            printBinary(N);
        cout << endl;
    }
    return 0;
}
