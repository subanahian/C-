#include <bits/stdc++.h> 
using namespace std;
int main() {
    string N; 
    int X;  
    cin >> N >> X;
    long long remainder = 0;
    for (int i = 0; i < N.size(); i++) {
        int digit = N[i] - '0';              
        remainder = (remainder * 10 + digit) % X; 
    }
    if (remainder == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
