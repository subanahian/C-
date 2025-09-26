#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n+1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        // Step 1: construct row counts from rule (2)+(3)
        vector<int> cnt(n+1, 0);

        // condition (2)
        for (int k = 1; k <= n; k++) {
            cnt[k]++; // row k gets one black cell (k,k)
        }

        // condition (3)
        for (int k = 1; k <= n; k++) {
            int row = k;
            int col = n+1-k;
            // add black cell (row,col)
            cnt[row]++;
        }

        // Step 2: verify with given a[]
        bool ok = true;
        for (int i = 1; i <= n; i++) {
            if (cnt[i] != a[i]) {
                ok = false;
                break;
            }
        }

        if (!ok) {
            cout << 0 << "\n";
        } else {
            // Special case: Sometimes overlap counted double → can give 2 variants
            // We need to check if center cell (when n odd) belongs to both sets
            if (n % 2 == 1) {
                int mid = (n+1)/2;
                if (a[mid] >= 2) {
                    cout << 2 << "\n";
                } else {
                    cout << 1 << "\n";
                }
            } else {
                cout << 1 << "\n";
            }
        }
    }
    return 0;
}
