#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        vector<int> ones;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') ones.push_back(i);
        }

        int ans = 0;

        // Case 1: no '1' in string
        if (ones.empty()) {
            ans = (n + k) / (k + 1);
        } else {
            // before first '1'
            int left_gap = ones[0];
            ans += left_gap / (k + 1);

            // between '1's
            for (int i = 1; i < (int)ones.size(); i++) {
                int gap = ones[i] - ones[i - 1] - 1;
                int free_space = gap - 2 * k;
                if (free_space > 0)
                    ans += free_space / (k + 1);
            }

            // after last '1'
            int right_gap = n - 1 - ones.back();
            ans += right_gap / (k + 1);
        }

        cout << ans << '\n';
    }
    return 0;
}
