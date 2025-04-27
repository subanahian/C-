#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N == 0 || N == 1) {
        cout << "Number of digits of " << N << "! is 1" << endl;
        return 0;
    }
    int fact = 1;
    for (int i = 2; i <= N; i++) {
        fact *= i;
    }
    int digits = 0;
    int temp = fact;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    cout << "Number of digits of " << N << "! is " << digits << "\n";
    return 0;
}
