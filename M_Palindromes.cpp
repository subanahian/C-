#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(const string &s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r])
            return false;
        l++;
        r--;
    }
    return true;
}
int main() {
    string s;
    cin >> s;
    if (!isPalindrome(s)) {
        cout << s.size() << endl;
    } else {
        bool allSame = true;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[0]) {
                allSame = false;
                break;
            }
        }
        if (allSame) {
            cout << 0 << "\n"; 
        } else {
            cout << s.size() - 1 << "\n";
        }
    }
    return 0;
}
