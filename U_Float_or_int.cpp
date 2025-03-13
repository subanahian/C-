#include <bits/stdc++.h>
using namespace std;
int main() {
    double N;
    cin >> N;
    int X = N;
    double Y = N - X; 
    if (Y == 0) {
    cout << "int " << X << "\n";
}
    else {
        cout << "float " << X << " " << Y << "\n";
    }
    return 0;
}

