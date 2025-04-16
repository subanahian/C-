#include <bits/stdc++.h>
using namespace std;
int main() {
    long long N;
    cin >> N;
    long long sum = 0;
    long long number = 1;
    long long count = 0;
    while (sum + number <= N) {
        sum = sum + number;
        number = number + 1;
        count = count + 1;
    }
    cout << count << "\n";
    return 0;
}
