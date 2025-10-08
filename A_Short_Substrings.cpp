#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; 	cin>>t;
	while(t--){
		string s; cin>>s;
		for(int i=0; i<s.size(); i+=2){ 
			cout<<s[i];
		}
		cout<<s.back()<<'\n';
	}
}
