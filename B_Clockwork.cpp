#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        bool ok = true;
        for (int i = 0; i < n; i++) {
            long long d = max(i, n - 1 - i);
            if (a[i] <= 2 * d) {
                ok = false;
                break;
            }
        }
        if (ok) cout << "YES"<<"\n";
        else cout << "NO"<<"\n";
    }
    return 0;
}
