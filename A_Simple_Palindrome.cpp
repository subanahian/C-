#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    string vowels = "aeiou";
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; ++i)
            cout << vowels[i % 5];
        cout << "\n";
    }
    return 0;
}
