#include<iostream>
using namespace std;
int main(){
    string x;
    cin>>x; 
    int track=0;
    for( int i=0;i<x.size();i++){
    if (x[i]=='H'||x[i]=='Q'||x[i]=='9') {
   track=1;
}  }
if(track==1){
    cout<<"YES\n";
}
else{
    cout<<"NO\n";
}
  return 0;
}