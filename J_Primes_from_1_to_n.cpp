#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N; 
    for (int num = 2; num <= N; num++) {
        bool Prime = true;
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                Prime = false;
                break;
            }
        }
        if (Prime) {
            cout << num << " " << "\n";
        }
    }
    return 0;
}
