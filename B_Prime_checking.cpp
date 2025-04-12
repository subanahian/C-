#include   <bits/stdc++.h>
using namespace std;
int main() {
    long long N;
    cin >> N;

    if (N <= 1) {
        cout << "NO" << endl;
        return 0;
    }

    for (long long i = 2; i < N; i++) {
        if (N % i == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
