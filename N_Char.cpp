#include <iostream>
using namespace std;
int main(){
    char X;
    cin >> X;
    if (X >= 65 && X <= 90){  
        cout << char(X + 32);}
    else if (X >= 97 && X <= 122) {
        cout << char(X - 32);}
    return 0;
}
