#include <iostream>
#include <vector>
#include <cmath>  
using namespace std;

bool isGreater(long long x, int n, const vector<long long>& a) {
    double log_product = 0.0;
    for (auto num : a)
        log_product += log10((double)num); 
    double log_xn = n * log10((double)x); 
    return log_xn > log_product;
}
int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    long long low = 1, high = 1e12, ans = -1;
    while (low <= high) {
        long long mid = (low + high) / 2;

        if (isGreater(mid, n, a)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans << "\n";
    return 0;
}
