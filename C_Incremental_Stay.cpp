#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(2*n);
        for (int i = 0; i < 2*n; i++) cin >> a[i];

        // base = sum of consecutive pairs
        long long base = 0;
        for (int i = 0; i < 2*n; i += 2) {
            base += a[i+1] - a[i];
        }

        // extreme pairs
        vector<long long> ext;
        for (int i = 0; i < n; i++) {
            long long diff = a[2*n-1-i] - a[i];
            ext.push_back(diff);
        }
        sort(ext.rbegin(), ext.rend());

        vector<long long> prefix(n+1, 0);
        for (int i = 0; i < n; i++) prefix[i+1] = prefix[i] + ext[i];

        for (int k = 1; k <= n; k++) {
            long long ans = base;
            if (k > 1) ans += prefix[k-1];
            cout << ans << (k==n ? '\n' : ' ');
        }
    }
    return 0;
}
