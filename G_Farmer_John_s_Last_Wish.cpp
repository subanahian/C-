#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        set<int> s;
        for(int i=0;i<n;i++){
            s.insert(a[i]);
            // প্রথম element 1 হলে g(prefix)=0
            if(a[i]==1 && s.size()==1) cout << 0 << " ";
            else cout << s.size()-1 << " "; // unique count - 1
        }
        cout << "\n";
    }
}
