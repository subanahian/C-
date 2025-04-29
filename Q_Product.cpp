#include <bits/stdc++.h> 
using namespace std;
int main() {
    int L, R, M;
    cin >> L >> R >> M;
    long long product = 1;
    for (int i = L; i <= R; i++) {
        product = (product * i) % M;
    }
    cout << product << "\n";
    return 0;
}
