#include <iostream>
using namespace std;
int main(){
    int t;
    cin >>t; 
    while (t--){
        int a,b;
        cin>>a>>b;
        int x=a%b;
        if (x==0){
            cout<<0<<"\n"; 
        } else {
            int c= a-x;
            c=c+b;
            cout<<c-a<<"\n";
        }
    }
    return 0;
}
