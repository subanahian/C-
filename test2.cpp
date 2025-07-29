#include <iostream>
#include <cmath>
using namespace std;

#define F(x) (3 * x - cos(x) - 1)

int main() {
    int i = 0;
    float a, b, c, f;

    cout << "\nEnter the value of a and b: ";
    cin >> a >> b;

    do {
        c = (a + b) / 2;
        f = F(c);

        cout << "\ni=" << i
             << " a=" << fixed << a
             << " b=" << b
             << " c=" << c
             << " F(c)=" << f;

        if (F(a) * F(c) < 0) {
            b = c;
        } else {
            a = c;
        }

        i++;
    } while (fabs(F(c)) > 0.001);

    cout << "\n\nApproximate root = " << c << "\n\n";

    return 0;
}
