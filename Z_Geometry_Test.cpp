#include <bits/stdc++.h> 
using namespace std;

int main() {
    double R, S;
    cin >> R >> S;
    double halfDiagonal = (S * sqrt(2)) / 2;
    if (R >= halfDiagonal) {
        cout << "Circle" << endl;
    } else if (S >= 2 * R) {
        cout << "Square" << endl;
    } else {
        cout << "Complex" << endl;
    }
    return 0;
}
