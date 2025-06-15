#include <iostream>
#include <string>
#include <set>
using namespace std;

bool isKGood(int num, int k) {
    set<char> digits;
    string s = to_string(num);
    for (char c : s) {
        digits.insert(c);
    }
    for (int i = 0; i <= k; ++i) {
        if (digits.find('0' + i) == digits.end()) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, k;
    cin >> n >> k;

    int count = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (isKGood(a, k)) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
