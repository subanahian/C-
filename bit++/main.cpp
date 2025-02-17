#include <iostream>
using namespace std;

int main() {
    int n, x = 0;
    cin >> n;
    string statement;

    for(int i=0;i<n;i++) {
        cin >> statement;
        if (statement[1] == '+') {
            x++;
        } else {
            x--;
        }
    }

    cout << x << "\n";
    return 0;
}
