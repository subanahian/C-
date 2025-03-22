#include <bits/stdc++.h>
using namespace std;
int main() {
    char S;       
    int N;           
    cin >> S;       
    cin >> N;        
    int X;           
    for (int i = 0; i < N; ++i) {
        cin >> X;   
        for (int j = 0; j < X; ++j) {
            cout << S; 
        }
        cout <<"\n"; 
    }
    return 0;
}
