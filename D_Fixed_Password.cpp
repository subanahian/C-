#include <bits/stdc++.h>
using namespace std;
int main() {
    int password;
    while (cin >> password) {
        if (password == 1999) {
            cout << "Correct" << "\n";
            break; 
        } else {
            cout << "Wrong" << "\n";
        }
    }

    return 0;
}
