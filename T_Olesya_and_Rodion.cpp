#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    if (t == 10 && n == 1) {
        cout << -1 << "\n";
    }
    else if (t == 10) {
        cout << 1; 
        for (int i = 1; i < n; i++) {
            cout << 0; 
        }
        cout << "\n";
    }
    else {
        cout << t; 
        for (int i = 1; i < n; i++) {
            cout << 0; 
        }
        cout << "\n";
    }
    return 0;
}
