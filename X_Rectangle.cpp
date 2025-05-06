#include <bits/stdc++.h> 
using namespace std;

int main() {
    int x[4], y[4];
    for (int i = 0; i < 4; i++) {
        cin >> x[i] >> y[i];
    }
    int minX = x[0], maxX = x[0];
    int minY = y[0], maxY = y[0];

    for (int i = 1; i < 4; i++) {
        if (x[i] < minX) minX = x[i];
        if (x[i] > maxX) maxX = x[i];
        if (y[i] < minY) minY = y[i];
        if (y[i] > maxY) maxY = y[i];
    }
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int px, py;
        cin >> px >> py;

        if (px >= minX && px <= maxX && py >= minY && py <= maxY)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
