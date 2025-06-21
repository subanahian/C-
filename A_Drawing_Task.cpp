#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<char>> grid(n, vector<char>(m, '.'));
    for (int i = 0; i < q; ++i) {
        int r1, c1, r2, c2;
        char c;
        cin >> r1 >> c1 >> r2 >> c2 >> c;
        int row_start = min(r1, r2) - 1;
        int row_end   = max(r1, r2) - 1;
        int col_start = min(c1, c2) - 1;
        int col_end   = max(c1, c2) - 1;
        for (int row = row_start; row <= row_end; ++row) {
            for (int col = col_start; col <= col_end; ++col) {
                grid[row][col] = c;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << grid[i][j];
        }
        cout << '\n';
    }
    return 0;
}
