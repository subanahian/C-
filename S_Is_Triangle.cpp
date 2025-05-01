#include <bits/stdc++.h> 
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;
    if (A + B > C && A + C > B && B + C > A) {
        double s = (A + B + C) / 2;
        double area = sqrt(s * (s - A) * (s - B) * (s - C));
        cout << "Valid\n";
        cout << fixed << setprecision(6) << area << "\n";
    } else {
        cout << "Invalid\n";
    }

    return 0;
}
