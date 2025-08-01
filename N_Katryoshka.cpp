#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    long long total = 0;
    long long t1 = min(n, min(m, k));
    n -= t1;
    m -= t1;
    k -= t1;
    total += t1;
    long long t2 = min(n / 2, k);
    total += t2;
    cout << total << "\n";
    return 0;
}
