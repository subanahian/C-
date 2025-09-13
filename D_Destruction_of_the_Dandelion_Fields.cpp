#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        long long sum = 0;
        bool odd = false;
        for (int i = 0; i < n; i++) {
            long long x; 
            cin >> x;
            sum += x;
            if (x % 2 == 1) odd = true;
        }

        if (odd) {
            cout << sum << "\n";
        } else {
            cout << 0 << "\n";
        }
    }
}
