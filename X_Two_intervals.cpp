#include <bits/stdc++.h>
using namespace std;
int main() {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
    
        if (r1 < l2 || r2 < l1) {
            cout << -1 << "\n";
        } else {
            cout << max(l1, l2) << " " << min(r1, r2) << "\n"; 
        }
    
        return 0;
    }
    
