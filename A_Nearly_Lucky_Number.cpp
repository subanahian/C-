#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, luckyDigits = 0;
    cin >> n;
    while (n){
        if (n % 10 == 4 || n % 10 == 7) {
            luckyDigits++;
        }
        n /= 10;
    }
    int isLucky = 1;
    if (luckyDigits == 0){
        isLucky = 0;
    }
    while (luckyDigits) {
        if (luckyDigits % 10 != 4 && luckyDigits % 10 != 7){
            isLucky = 0;
            break;
        }
        luckyDigits /= 10;
    }
    if (isLucky == 1) {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
