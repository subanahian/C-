#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    while (cin >> N >> M && N > 0 && M > 0) {
        if (N > M) swap(N, M);
        int sum = 0;
        for (int i = N; i <= M; ++i) {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}
