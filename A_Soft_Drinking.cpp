#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_drink = k * l;
    int total_slices = c * d;
    int toast_from_drink = total_drink / nl;
    int toast_from_slices = total_slices;
    int toast_from_salt = p / np;
    int total_toasts = min(min(toast_from_drink, toast_from_slices), toast_from_salt);
    int result = total_toasts / n;
    cout << result << "\n";
    return 0;
}
