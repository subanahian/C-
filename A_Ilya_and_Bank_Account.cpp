#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	if(n<0){
		int p = n/10;
		int t= n/100 * 10 + n%10;
		cout<<max(p, t);
	} else {
		cout<<n;
	}
}
