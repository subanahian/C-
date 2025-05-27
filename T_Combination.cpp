#include <iostream>
using namespace std;

const int MAX = 31;
int dp[MAX][MAX];

int nCr(int n, int r) {
    if (r > n) return 0; 
    if (r == 0 || r == n)
        return 1;
    if (dp[n][r] != -1)
        return dp[n][r];
    return dp[n][r] = nCr(n - 1, r - 1) + nCr(n - 1, r);
}
int main() {
    int N, R;
    cin >> N >> R;
    for (int i = 0; i < MAX; ++i)
        for (int j = 0; j < MAX; ++j)
            dp[i][j] = -1;
    cout << nCr(N, R) << "\n";
    return 0;
}
