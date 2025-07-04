#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int n, m;
vector<string> grid;
vector<vector<bool>> used;
vector<tuple<int, int, int>> stars;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1}; 
int get_ray_length(int x, int y, int dir) {
    int len = 0;
    while (true) {
        int nx = x + dx[dir] * (len + 1);
        int ny = y + dy[dir] * (len + 1);
        if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == '*') {
            len++;
        } else {
            break;
        }
    }
    return len;
}
int main() {
    cin >> n >> m;
    grid.resize(n);
    used.assign(n, vector<bool>(m, false));
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }
    for (int i = 1; i < n - 1; ++i) {
        for (int j = 1; j < m - 1; ++j) {
            if (grid[i][j] != '*') continue;
            int up = get_ray_length(i, j, 0);
            int down = get_ray_length(i, j, 1);
            int left = get_ray_length(i, j, 2);
            int right = get_ray_length(i, j, 3);
            int size = min({up, down, left, right});
            if (size > 0) {
                stars.emplace_back(i + 1, j + 1, size); 
                used[i][j] = true;
                for (int d = 1; d <= size; ++d) {
                    used[i - d][j] = true;
                    used[i + d][j] = true;
                    used[i][j - d] = true;
                    used[i][j + d] = true;
                }
            }
        }
    }
    bool ok = true;
    for (int i = 0; i < n && ok; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '*' && !used[i][j]) {
                ok = false;
                break;
            }
        }
    }

    if (!ok) {
        cout << -1 << endl;
    } else {
        cout << stars.size() << '\n';
        for (auto [x, y, s] : stars) {
            cout << x << ' ' << y << ' ' << s << '\n';
        }
    }

    return 0;
}
