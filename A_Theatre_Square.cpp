#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a;
    cin>>n>>m>>a;
    int  row = (n + a - 1) / a; 
    int  col = (m + a - 1) / a;
    int total = row * col;
    cout << total << "\n";
}