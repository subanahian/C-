#include <bits/stdc++.h>
using namespace std;

bool divisibleBy11(string s) {
    int oddSum = 0, evenSum = 0;
    for (int i = 0; i < s.size(); i++) {
        int d = s[i] - '0';
        if (i % 2 == 0) oddSum += d;
        else evenSum += d;
    }
    return abs(oddSum - evenSum) % 11 == 0;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if (n == 1) {
            cout << -1 << "\n";
            continue;
        }
        string ans = "-1";
        if (n == 2) ans = "66";
        else if (n == 4) ans = "3366";
        else if (n == 5) ans = "36366";
        else if (n == 7) ans = "3336366";
        else {
            string s(n, '3');
            s.back() = '6';
            for (int i = 0; i < n; i++) {
                s[i] = '3';
                if (divisibleBy11(s)) {
                    ans = s;
                    break;
                }
                s[i] = '6';
            }
        }
        cout << ans << "\n" ;
    }
    return 0;
}
