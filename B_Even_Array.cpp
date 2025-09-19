#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t; cin>>t;
	while(t--){	
		int n; cin>>n;
		int a[n]; vector<int> cnt{0,0};
 
		for(int i=0; i<n; i++){
			cin>>a[i];
			if(a[i]%2 != i%2) cnt[i%2]++;
		}
 
		if(cnt[0] != cnt[1]) cout<<-1<<endl;
		else cout<<cnt[0]<<endl;		
	}
 
}
