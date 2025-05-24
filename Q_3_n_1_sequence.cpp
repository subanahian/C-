#include <bits/stdc++.h>
using namespace std;

int sequenceLength(int n) {
    if (n == 1)
        return 1;
    if (n % 2 == 0)
        return 1 + sequenceLength(n / 2);
    else
        return 1 + sequenceLength(3 * n + 1);
}

int main() {
    int n;
    cin >> n;
    cout << sequenceLength(n) << "\n";

    return 0;
}
