#include <bits/stdc++.h>

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n), b(m);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];
    long long sum_a = accumulate(a.begin(), a.end(), 0LL);
    long long sum_b = accumulate(b.begin(), b.end(), 0LL);
    if (sum_a == sum_b)
        cout << "Yes" << "\n";
    else
        cout << "No" << "\n";
    return 0;
}
