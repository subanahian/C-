#include <bits/stdc++.h> 
using namespace std;

int main() {
    long long X, Y, R, N;
    cin >> X >> Y >> R >> N;

    for (int i = 0; i < N; i++) {
        long long xi, yi;
        cin >> xi >> yi;
        long long dx = xi - X;
        long long dy = yi - Y;
        if (dx * dx + dy * dy <= R * R) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
