#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], b[n];
    bool changed = false;
    bool unordered = false;

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        if (a[i] != b[i]) {
            changed = true; 
        }
    }

    if (changed) {
        cout << "rated" << "\n";
        return 0;
    }
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            unordered = true;
            break;
        }
    }
    if (unordered) {
        cout << "unrated" << "\n";
    } else {
        cout << "maybe" << "\n";
    }

    return 0;
}
