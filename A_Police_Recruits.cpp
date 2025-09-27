#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],cnt=0,pol=0;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		if(a[i]==-1 && pol==0) cnt++;
		else if(a[i]!=-1) pol+=a[i];
		else pol--;
	}
	cout<<cnt;
}
