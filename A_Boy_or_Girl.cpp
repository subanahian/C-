#include <bits/stdc++.h>
using namespace std;

int main (){ 
    
    string name;
    cin>> name;
    
    set<char>n;

    for(int i=0; i<name.size(); i++){
        n.insert (name[i]);
    }
    
    int check = n.size();
    
    if (check % 2 == 0)
        cout << "CHAT WITH HER!" << "\n";
    else
        cout << "IGNORE HIM!" << "\n";
        return 0;

}