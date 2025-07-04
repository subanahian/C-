#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> farm(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> farm[i][j];
    vector<int> row_map(n), col_map(m);
    for (int i = 0; i < n; ++i) row_map[i] = i;
    for (int j = 0; j < m; ++j) col_map[j] = j;
    while (k--) {
        char type;
        int x, y;
        cin >> type >> x >> y;
        --x; --y;
        if (type == 'r') {
            swap(row_map[x], row_map[y]);
        } else if (type == 'c') {
            swap(col_map[x], col_map[y]);
        } else if (type == 'g') {
            cout << farm[row_map[x]][col_map[y]] << '\n';
        }
    }
    return 0;
}
