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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int first = abs(a[0]);
        int mn = first, mx = first;
        for (int i = 1; i < n; i++) {
            mn = min(mn, abs(a[i]));
            mx = max(mx, abs(a[i]));
        }

        if (first == mn || first == mx) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
