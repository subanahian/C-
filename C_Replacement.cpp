#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N; 
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x; 
        if (x > 0) {
            cout << "1 "; 
        } else if (x < 0) {
            cout << "2 ";
        } else {
            cout << "0 ";
        }
    }
    return 0;
}
