#include<bits/stdc++.h>
using namespace std;
int main() {
    long long A, B, X;
    cin >> A >> B >> X;
    if (A > B) {
        long long temp = A;
        A = B;
        B = temp;
    }
    long long sum = 0;
    for (long long i = A; i <= B; i++) {
        if (i % X == 0) {
            sum += i;
        }
    }
    cout << sum << "\n";
    return 0;
}
