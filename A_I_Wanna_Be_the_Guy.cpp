#include <bits/stdtr1c++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
   
    set<int>l;

    int p;
    cin>> p;
    for(int i=0; i<p ;i++){
    int temp;
    cin >> temp;
    l.insert(temp);
    }

    int q;
    cin>> q;
    for(int j=0; j<q ;j++){
    int temp;
    cin >> temp;
    l.insert(temp);;
    }

    if(l.size() == n){
    cout << "I become the guy.\n";
    }
    else{
    cout << "Oh, my keyboard!\n";}
}

