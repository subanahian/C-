#include <bits/stdc++.h>
using namespace std;
const int MAX = 100000;
int A[MAX]; 
int sumLastM(int index, int m) {
    if (m == 0) return 0; 
    return A[index] + sumLastM(index - 1, m - 1);
}
int main() {
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int result = sumLastM(N - 1, M);
    cout << result << "\n";
    return 0;
}
