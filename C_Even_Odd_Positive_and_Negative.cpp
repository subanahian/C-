#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int even = 0, odd = 0, positive = 0, negative = 0;
    int num;
    for (int i = 0; i < N; ++i) {
        cin >> num;
        if (num % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        if (num > 0) {
            positive++;
        } else if (num < 0) {
            negative++;
        }
    }
    cout << "Even: " << even << "\n";
    cout << "Odd: " << odd << "\n";
    cout << "Positive: " << positive << "\n";
    cout << "Negative: " << negative << "\n";
    return 0;
}
