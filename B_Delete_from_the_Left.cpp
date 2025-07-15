#include <bits/stdc++.h>
using namespace std;

int minMovesToEqual(string s, string t) {
    int i = s.length() - 1;
    int j = t.length() - 1;
    int commonSuffix = 0;
    while (i >= 0 && j >= 0 && s[i] == t[j]) {
        commonSuffix++;
        i--;
        j--;
    }
    return (s.length() - commonSuffix) + (t.length() - commonSuffix);
}
int main() {
    string s, t;
    cin >> s >> t;
    cout << minMovesToEqual(s, t) << "\n";
    return 0;
}
