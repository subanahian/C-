#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int c0 = 0, c1 = 0, c2 = 0;
        for (char ch : s) {
            if (ch == '0') c0++;
            else if (ch == '1') c1++;
            else c2++;
        }

        string ans(n, '+');

        // definitely removed
        for (int i = 0; i < c0; i++) ans[i] = '-';
        for (int i = 0; i < c1; i++) ans[n - 1 - i] = '-';

        // possible uncertain cards due to '2'
        int leftMin = c0;
        int rightMax = n - c1 - 1;

        // range of uncertainty after considering all possible removals
        int leftPossible = c0;
        int rightPossible = n - c1 - 1;

        // minimum top removed = c0
        // maximum top removed = c0 + c2
        int maxTop = min(n, c0 + c2);
        int maxBottom = min(n, c1 + c2);

        for (int i = 0; i < n; i++) {
            bool removedTop = (i < c0);          // definitely removed from top
            bool removedBottom = (i >= n - c1);  // definitely removed from bottom
            bool maybeRemovedTop = (i < maxTop); // could be removed if all '2' are from top
            bool maybeRemovedBottom = (i >= n - maxBottom); // could be removed if all '2' from bottom

            if (removedTop || removedBottom)
                ans[i] = '-';
            else if (maybeRemovedTop && maybeRemovedBottom)
                ans[i] = '?';
            else
                ans[i] = '+';
        }

        cout << ans << '\n';
    }
    return 0;
}
