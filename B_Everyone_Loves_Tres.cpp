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
    while (t--) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << -1 << "\n";
            continue;
        }
        string ans = "-1";
        string s(n, '3');
        s[n - 1] = '6';
        for (int mask = 0; mask < (1 << min(n, 10)); mask++) { 
            string temp = s;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) temp[i] = '6';
            }
            if (temp.back() == '6' && divisibleBy11(temp)) {
                ans = temp;
                break;
            }
        }

        cout << ans << "\n";
    }
}
