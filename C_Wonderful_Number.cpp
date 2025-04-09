#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) {
        return false; 
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true; 
}
int main() {
    int T, N;
    cin >> T; 
    for (int i = 0; i < T; i++) {
        cin >> N;
        if (isPrime(N)) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
     }
    }
    return 0;
}
