#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>> s;
    int p=1;
    for (int i =1 ; i<s.size(); i++){
        if(s[i]== s[i-1]){
            p++;
            if(p==7){
                cout<< "YES" <<"\n";
               return 0;
            }
        }
        else{
    p=1;
}
    }
cout<< "NO"<< "\n";
return 0;
}