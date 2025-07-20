#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long n, s;
        cin >> n >> s;
        vector<long long> result;

        // Start from n and go down to 1
        for (long long i = n; i >= 1 && s > 0; --i) {
            if (s >= i) {
                result.push_back(i);
                s -= i;
            }
        }

        if (s != 0) {
            cout << "-1\n";
        } else {
            cout << result.size();
            for (int i = 0; i < result.size(); ++i) {
                cout << " " << result[i];
            }
            cout << "\n";
        }
    }

    return 0;
}
