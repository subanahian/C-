#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s="codeforces";
    while(t--){
string m;
cin>>m;
int ans=0;
for(int i =0;i<10;i++){
    if(s[i]!=m[i]){
    ans++;
}
}
cout<<ans<<"\n";
    }
}