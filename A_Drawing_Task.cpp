#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<char>> grid(n, vector<char>(m, '.'));
    for (int i = 0; i < q; ++i) {
        int r1, c1, r2, c2;
        char c;
        cin >> r1 >> c1 >> r2 >> c2 >> c;
        for (int row = r1 - 1; row <= r2 - 1; ++row) {
            for (int col = c1 - 1; col <= c2 - 1; ++col) {
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
