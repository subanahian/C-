#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a <= h) {
            ans += 1;
        }
        else {
         ans += 2;  
        }
    }
    cout << ans << "\n";
    return 0;
}
