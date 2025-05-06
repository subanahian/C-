#include <iostream>
#include <string>
#include <cmath>
using namespace std;

long long mulmod(long long a, long long b, long long mod) {
    long long res = 0;
    a %= mod;
    while (b > 0) {
        if (b % 2 == 1) res = (res + a) % mod;
        a = (2 * a) % mod;
        b /= 2;
    }
    return res;
}
long long powmod(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = mulmod(result, base, mod);
        base = mulmod(base, base, mod);
        exp /= 2;
    }
    return result;
}
bool isPrime(long long n) {
    if (n < 2) return false;
    int r = 0;
    long long d = n - 1;
    while (d % 2 == 0) {
        d /= 2;
        r++;
    }
    int bases[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    for (int a : bases) {
        if (a >= n) break;
        long long x = powmod(a, d, n);
        if (x == 1 || x == n - 1) continue;
        bool composite = true;
        for (int i = 1; i < r; ++i) {
            x = mulmod(x, x, n);
            if (x == n - 1) {
                composite = false;
                break;
            }
        }
        if (composite) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string x;
        int k;
        cin >> x >> k;

        string y = "";
        for (int i = 0; i < k; i++) {
            y += x;
        }
        if (y.length() > 18) {
            cout << "NO\n";
            continue;
        }

        long long num = stoll(y);
        if (isPrime(num))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
