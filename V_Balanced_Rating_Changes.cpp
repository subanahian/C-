#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    vector<int> oddIndices;

    int sum = 0;

    // Step 1: Read input and compute floor(ai / 2)
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i] / 2; // This is floor division
        sum += b[i];

        // If a[i] is odd, we might need to adjust later
        if (a[i] % 2 != 0) {
            oddIndices.push_back(i);
        }
    }

    // Step 2: Fix the sum by adjusting some odd floors to ceilings
    int i = 0;
    while (sum < 0 && i < oddIndices.size()) {
        int idx = oddIndices[i];
        b[idx] = b[idx] + 1; // make it ceil instead of floor
        sum++;
        i++;
    }

    // Step 3: Output result
    for (int i = 0; i < n; ++i) {
        cout << b[i] << endl;
    }

    return 0;
}
