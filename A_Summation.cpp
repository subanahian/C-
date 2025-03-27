#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, num, sum = 0;
    cin >> N;
    while (N--) {
        cin >> num;
        sum += num;
    }
    cout << abs(sum) << "\n";
    return 0;
}
