#include <bits/stdc++.h>
using namespace std;

int main(){
    int y;
    cin >> y;
        for (int i = y + 1; i <= 10000; i++) {
        set<int>s;
        int a = i / 1000;
        int b = (i / 100) % 10;
        int c = (i / 10) % 10;   
        int d = i % 10;    
        s.insert(a);
        s.insert(b);
        s.insert(c);
        s.insert(d);
        if (s.size() == 4) {
        cout << i << "\n";
        break;
        }

        }
    
}