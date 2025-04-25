#include  <bits/stdc++.h> 
using namespace std;
int main() {
    int T;
    cin >> T;
    if (T == 1) {
        string N;
        int X;
        cin >> N >> X;
        int result = 0;
        for (int i = 0; i < N.length(); i++) {
            char c = N[i];
            int value;

            if (c >= '0' && c <= '9') {
                value = c - '0';
            } else {
                value = c - 'A' + 10;
            }

            result = result * X + value;
        }

        cout << result << "\n";

    } else if (T == 2) {
        int N, X;
        cin >> N >> X;
        string result = "";
        if (N == 0) {
            result = "0";
        }
        while (N > 0) {
            int remainder = N % X;
            char digit;
            if (remainder < 10) {
                digit = remainder + '0';
            } else {
                digit = (remainder - 10) + 'A';
            }
            result += digit;
            N = N / X;
        }
        reverse(result.begin(), result.end());
        cout << result << "\n";
    }
    return 0;
}
