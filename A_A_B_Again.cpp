#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--) {
       /*int num;
        cin>>num;
        int ans=0;
        ans=num%10;
        num=num/10;
        ans=ans+num;
    cout<<ans<<"\n";
        */ 
        string s;
        cin>>s;
        cout<<(s[0]-'0')+(s[1]-'0')<<"\n";
    }
    return 0;

}