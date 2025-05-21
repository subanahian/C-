#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
int A[MAX][MAX], B[MAX][MAX], Result[MAX][MAX];

void addMatrices(int row, int col, int R, int C) {
    if (row == R) return; 
    Result[row][col] = A[row][col] + B[row][col];
    if (col + 1 < C)
        addMatrices(row, col + 1, R, C); 
    else
        addMatrices(row + 1, 0, R, C); 
}

int main() {
    int R, C;
    cin >> R >> C;

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> A[i][j];

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> B[i][j];

    addMatrices(0, 0, R, C);

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << Result[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
