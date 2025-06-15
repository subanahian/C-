#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], b[n];
    bool changed = false;
    bool unordered = false;

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        if (a[i] != b[i]) {
            changed = true; 
        }
    }

    if (changed) {
        cout << "rated" << endl;
        return 0;
    }
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            unordered = true;
            break;
        }
    }
    if (unordered) {
        cout << "unrated" << endl;
    } else {
        cout << "maybe" << endl;
    }

    return 0;
}
