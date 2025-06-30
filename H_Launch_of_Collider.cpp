#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    string dir;
    cin >> dir;
    vector<int> pos(n);
    for (int i = 0; i < n; ++i) {
        cin >> pos[i];
    }
    int min_time = INT_MAX;
    for (int i = 0; i < n - 1; ++i) {
        if (dir[i] == 'R' && dir[i + 1] == 'L') {
            int time = (pos[i + 1] - pos[i]) / 2;
            min_time = min(min_time, time);
        }
    }
    if (min_time == INT_MAX)
        cout << -1 << "\n";
    else
        cout << min_time << "\n";
    return 0;
}
