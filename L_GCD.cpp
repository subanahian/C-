#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    while (B != 0) {
        int temp = B;
        B = A % B;
        A = temp;
    }
    
    cout << A << "\n";
    return 0;
}
