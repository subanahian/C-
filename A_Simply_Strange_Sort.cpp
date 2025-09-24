#include <bits/stdc++.h>
using namespace std;

bool is_sorted(const vector<int>& a) {
    for (int i = 1; i < a.size(); i++)
        if (a[i-1] > a[i]) return false;
    return true;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        if (is_sorted(a)) {
            cout << 0 << "\n";
            continue;
        }
        int iterations = 0;
        while (!is_sorted(a)) {
            iterations++;
            if (iterations % 2 == 1) {
                for (int i = 0; i <= n-2; i += 2) {
                    if (a[i] > a[i+1]) swap(a[i], a[i+1]);
                }
            } else {
                for (int i = 1; i <= n-2; i += 2) {
                    if (a[i] > a[i+1]) swap(a[i], a[i+1]);
                }
            }
        }
        cout << iterations << "\n";
    }
    return 0;
}
