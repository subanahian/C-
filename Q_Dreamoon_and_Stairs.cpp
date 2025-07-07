#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int min_moves = (n + 1) / 2;
    for (int i = min_moves; i <= n; ++i) {
        if (i % m == 0) {
            cout << i << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
    return 0;
}
