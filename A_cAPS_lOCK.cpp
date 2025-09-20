#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin>>s;
	bool capslock = true;
	for(int i=1; i<s.length(); i++)
		if(s[i]>'Z') capslock=false;
 
	if(capslock==true)
		for(int i=0; i<s.length(); i++)
			s[i]^=32;
 
	cout<<s;
}