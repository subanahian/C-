#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    long long iceCream = x;
    int distressedKids = 0;

    for (int i = 0; i < n; ++i) {
        char op;
        long long d;
        cin >> op >> d;

        if (op == '+') {
            iceCream += d;
        } else {
            if (iceCream >= d) {
                iceCream -= d;
            } else {
                distressedKids++;
            }
        }
    }

    cout << iceCream << " " << distressedKids << "\n";
    return 0;
}
