#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int count;
    bool first = true;
    for (int i = 2; i * i <= N; ++i) {
        count = 0;
        while (N % i == 0) {
            count++;
            N = N / i;
        }
        if (count > 0) {
            if (!first) cout << "*";
            first = false;
            cout << "(" << i << "^" << count << ")";
        }
    }
    if (N > 1) {
        if (!first) cout << "*";
        cout << "(" << N << "^1)";
    }
    return 0;
}
