#include <iostream>
#include <cmath> // for sqrt() and pow()
using namespace std;

int main() {
    double x1, y1, x2, y2;
    double x3, y3, x4, y4; 
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    double cx1 = (x1 + x2) / 2.0;
    double cy1 = (y1 + y2) / 2.0;
    double cx2 = (x3 + x4) / 2.0;
    double cy2 = (y3 + y4) / 2.0;
    double r1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) / 2.0;
    double r2 = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2)) / 2.0;
    double centerDistance = sqrt(pow(cx1 - cx2, 2) + pow(cy1 - cy2, 2));
    if (centerDistance <= (r1 + r2)) {
        cout << "YES" << "\n";  
    } else {
        cout << "NO" << "\n"; 
    }

    return 0;
}
