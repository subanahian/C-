#include <bits/stdc++.h>

 using namespace std;

 int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        
        int y=999;
         while (x > 0){
            y = min(y,x%10);
            x/=10;

         }
         cout << y <<"\n";
    }
    return 0;
 }