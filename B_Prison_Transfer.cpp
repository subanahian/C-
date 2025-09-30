#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c;
    long long t;
    cin >> n >> t >> c;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long ans = 0;
    int len = 0; 
    for (int i = 0; i < n; i++) {
        if (a[i] <= t) {
            len++;
        } else {
            if (len >= c) ans += (len - c + 1);
            len = 0;
        }
    }
    if (len >= c) ans += (len - c + 1);
    cout << ans << "\n";
    return 0;
}
