#include <bits/stdc++.h>
using namespace std;

int main(){
    string g, h, k;
    cin>> g >> h>> k;
    string c = g+h;
    
    sort(k.begin(),k.end());
    sort(c.begin(),c.end());

    if(c==k){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
}