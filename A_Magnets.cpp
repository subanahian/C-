#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    string currentString,previousString;
    previousString = "";
    int ans = 0;
    while (t--){
        cin>>currentString;
        if(currentString != previousString) {
            ans++;
        }
        previousString=currentString;
    }
    cout <<ans<<"\n";
    return 0;
}
