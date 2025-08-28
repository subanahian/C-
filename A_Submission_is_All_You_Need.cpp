#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        int m = 0;
        int i = 0;
        while (i < n && a[i] == m) {
            m++;
            i++;
        }
        int r = 0;
        for (; i < n; i++) r += a[i];
        cout << m + r << "\n";
    }
}
