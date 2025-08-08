#include <bits/stdc++.h>
using namespace std;

bool luckyNum(long long x) {
    if (x == 0) return false;
    while (x) {
        int d = x % 10;
        if (d != 4 && d != 7) return false;
        x /= 10;
    }
    return true;
}

int main() {
    long long n;
    cin >> n;
    int cnt = 0;
    while (n) {
        int d = n % 10;
        if (d == 4 || d == 7) cnt++;
        n /= 10;
    }
    cout << (luckyNum(cnt) ? "YES" : "NO");
}

