#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> x(n);
    for (int i = 0; i < n; ++i)
        cin >> x[i];
    for (int i = 0; i < n; ++i) {
        long long mini, maxi;
        if (i == 0)
            mini = abs(x[1] - x[0]);
        else if (i == n - 1)
            mini = abs(x[n - 1] - x[n - 2]);
        else
            mini = min(abs(x[i] - x[i - 1]), abs(x[i + 1] - x[i]));
        maxi = max(abs(x[i] - x[0]), abs(x[n - 1] - x[i]));
        cout << mini << " " << maxi << endl;
    }
    return 0;
}
