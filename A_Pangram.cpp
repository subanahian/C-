#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char>a;
    for (int i = 0; i < n; i++) {
    char c = s[i];
    a.insert(c);
    
    if (c >= 'A' && c <= 'Z') {
   cout << "YES"<< "\n";
    }
     else {
      cout << "NO"<< "\n";
    }
}
}