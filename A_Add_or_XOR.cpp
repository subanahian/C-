#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int a, b;
        int x, y;
        cin >> a >> b >> x >> y;
        if (a == b) {
            cout << 0 << endl;
            continue;
        }
        int ans = -1;
        if (a < b) {
            int cost1 = (b - a) * x;
            int ax = a ^ 1;
            int cost2 = 1000000000;
            if (ax <= b) {
                cost2 = y + (b - ax) * x;
            }
            if (cost1 < cost2) ans = cost1;
            else ans = cost2;
        }
        else {
            int ax = a ^ 1;
            if (ax == b) {
                ans = y; 
            }
            else if (ax < b) {
                ans = y + (b - ax) * x;
            }
            else {
                ans = -1;
            }
        }
        cout << ans << endl;
    }
 return 0;
}
