#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    for (int i = 1; i <= 10; i++) {
        int cost = i * k;
        if (cost % 10 == 0 || cost % 10 == r) {
            cout << i << "\n";
            return 0;
        }
    }
    return 0;
}
