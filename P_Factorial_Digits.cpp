#include<bits/stdc++.h> 
using namespace std;
int main() {
    int N;
    cin >> N;
    if (N == 0 || N == 1) {
        cout << "Number of digits of " << N << "! is 1" << "\n";
        return 0;
    }
    double digits = 0;
    for (int i = 2; i <= N; i++) {
        digits += log10(i);
    }
    cout << "Number of digits of " << N << "! is " << (int)digits + 1 << "\n";
    return 0;
}
