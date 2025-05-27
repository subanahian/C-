#include <iostream>
using namespace std;

int nCr(int n, int r) {
    if (r == 0 || r == n)
        return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}
int main() {
    int N, R;
    cin >> N >> R;
    cout << nCr(N, R) << "\n";
    return 0;
}
