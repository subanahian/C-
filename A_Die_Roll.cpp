#include <bits/stdc++.h>
using namespace std;

int main(){
      int Y, W;
    cin >> Y >> W;
    int a = max(Y, W);
int b = 7 - a;
if(b==6){
    cout<<"1/1";
}
if(b==5){
    cout<<"5/6";
}
if(b==4){
    cout<<"2/3";
}
if(b==3){
    cout<<"1/2";
}
if(b==2){
    cout<<"1/3";
}
if(b==1){
    cout<<"1/6";
}
cout<<"\n";
}