#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
        
        if (s == "yes") {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}
