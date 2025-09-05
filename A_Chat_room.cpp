#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string w =  "hello";
    int j ;
    for(int i = 0; i < s; i++){
        j++;
    }
    if(j==w.size()){
        cout<< "Yes" << "\n";
    }
    else{
        cout<< "No" << "\n";
    }
}