#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double L, S1, S2;
    int Q;
    cin >> L >> S1 >> S2;
    cin >> Q;
    double relative_speed = fabs(S1 - S2);
    for (int i = 0; i < Q; i++) {
        double qi;
        cin >> qi;
        if (qi == L * L) {
            cout << fixed << setprecision(6) << 0.0 << "\n";
            continue;
        }
        double sqrt_qi = sqrt(qi);
        double t = (L - sqrt_qi) * sqrt(2) / relative_speed;
        cout << fixed << setprecision(6) << t << "\n";
    }

    return 0;
}
