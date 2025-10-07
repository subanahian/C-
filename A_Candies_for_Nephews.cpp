#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int r = n % 3;
        int need = (3 - r) % 3;
        cout << need << "\n";
    }
    return 0;
}
