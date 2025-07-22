#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    double log_product = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        log_product += log((double)a[i]);
    }
    double avg_log = log_product / n;
    long long x = (long long)floor(exp(avg_log)) + 1;
    cout << x << endl;
    return 0;
}
