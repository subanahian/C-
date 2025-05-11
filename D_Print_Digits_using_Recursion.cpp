#include <bits/stdc++.h> 
using namespace std;


void printDigits(int n) {
    if (n < 10) {
        cout << n << " ";
    } else {
        printDigits(n / 10);       
        cout << n % 10 << " ";     
    }
}

int main() {
    int T;
    cin >> T; 

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        if (N == 0) {
            cout << "0";
        } else {
            printDigits(N);
        }

        cout << "\n";  
    }

    return 0;
}
