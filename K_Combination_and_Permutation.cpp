#include  <bits/stdc++.h>
using namespace std;
long long fact(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}
int main() {
    int A, B;
    cin >> A >> B;
    long long ncr = fact(A) / (fact(B) * fact(A - B));
    long long npr = fact(A) / fact(A - B);
    cout << ncr << " " << npr << endl;
    return 0;
}
