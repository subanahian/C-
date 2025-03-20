#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int cost = (w * (w + 1) / 2) * k;
    int borrow = cost - n;
    if (borrow > 0){
        cout << borrow << "\n";
    }
    else{
        cout << 0 << "\n";
    }
    return 0;
}
