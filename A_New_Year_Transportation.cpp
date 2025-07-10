#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int a[n];  
    for (int i = 1; i < n; ++i) {
        cin >> a[i];
    }
    int pos = 1;
    while (pos < t) {
        pos += a[pos];
    }
    if (pos == t) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
