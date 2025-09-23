#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n; cin>>t;
	while(t--){
		cin>>n;	//input taken
		vector<int> v; //output store
		int d=10; //divisor
		while(n){
			if(n%d){
				v.push_back(n%d);
				n = n - (n%d);
				}
			d = d*10;
		}
		cout<<v.size()<<'\n';
		for(auto x:v) {
			cout<<x<<" ";
		}
		cout<<'\n';
	}
}