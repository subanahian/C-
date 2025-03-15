#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int result = (A * B * C * D) % 100;
    cout << result << "\n";
    return 0;
}
