#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    map<char,int> mp;
    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }
    int anton = mp ['A'] ;
    int danik = mp ['D'];

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