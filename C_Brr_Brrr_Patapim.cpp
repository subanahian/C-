#include <bits/stdc++.h> 
using namespace std;
int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;  
        vector<vector<int>> G(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> G[i][j];
            }
        }
        vector<int> p(2 * n + 1, -1);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int pos = i + j + 1; 
                if (p[pos] == -1) {
                    p[pos] = G[i][j]; 
                }
            }
        }
        for (int i = 1; i <= 2 * n; i++) {
            cout << p[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
   