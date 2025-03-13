#include <bits/stdc++.h>
using namespace std;
int main() {
    int A,B,C;
    cin>>A>>B>>C;
    if (A<= B && A<= C) {
        cout << A << "\n";
        if (B<=C) {
            cout << B << "\n" << C << "\n";
        } else {
            cout << C << "\n" << B << "\n";
        }
    } else if (B<=A && B<=C) {
        cout << B << "\n";
        if (A<=C) {
            cout << A << "\n" << C << "\n";
        } else {
            cout << C << "\n" << A << "\n";
        }
    } else {
        cout << C << "\n";
        if (A<=B) {
            cout << A << "\n" << B << "\n";
        } else {
            cout << B << "\n" << A << "\n";
        }
    }
    cout << "\n";
    cout << A << "\n" << B << "\n" << C << "\n";
    return 0;
}
