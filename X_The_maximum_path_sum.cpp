#include <iostream>
using namespace std;

const int MAX = 10;
int A[MAX][MAX];
int N, M;

int maxPathSum(int i, int j) {
    if (i >= N || j >= M) return -1000000; 
    if (i == N - 1 && j == M - 1) return A[i][j];
    int right = maxPathSum(i, j + 1);
    int down = maxPathSum(i + 1, j);

    return A[i][j] + max(right, down);
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> A[i][j];
    cout << maxPathSum(0, 0) << endl;

    return 0;
}
