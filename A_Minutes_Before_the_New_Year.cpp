#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int h,m,x;
    cin >> h >> m;
 x = 1440 - (h * 60 + m);
    cout << x <<"\n";
}

}