#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int total = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
        }
        if (total % 2 == 0) 
        {cout << "YES\n";}
        else {
            cout << "NO\n";}
    }
    return 0;
}
