#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; long long m;
        cin >> n >> m;
        long long time = 0, points = 0;
        int side = 0;

        for (int i = 0; i < n; i++) {
            long long a; int b;
            cin >> a >> b;
            long long gap = a -time;

            if ((side == b && gap % 2 == 0) ||
                (side != b && gap % 2 == 1))
                points += gap;
            else
                points += gap - 1;

        time = a;
            side = b;
        }
        points += m - time;
        cout << points << "\n";
    }
}
