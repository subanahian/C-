#include <bits/stdc++.h>
using namespace std;
int main() {
    int X;
    cin >> X;
    bool isPrime = true;
    for (int i = 2; i <= X - 1; i++) {
        isPrime = isPrime && (X % i != 0);
} if (isPrime)
cout << "YES" << endl;
else
cout << "NO" << endl;
return 0;
 }
 