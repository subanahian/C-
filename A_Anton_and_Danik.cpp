#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
        int anton = 0;
        int  danik = 0;
      for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            anton++;
        } else if (s[i] == 'D') {
            danik++;
        }
    }
    if (anton > danik){
         cout << "Anton\n";
         }
    else if (danik > anton) {
        cout << "Danik\n";
    }
    else {
        cout << "Friendship\n";
    }
return 0;
}