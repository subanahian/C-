#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i)
        if (num % i == 0) return false;
    return true;
}
int main() {
    vector<int> fib(51);
    fib[1] = 0;
    fib[2] = 1;
    for (int i = 3; i <= 50; ++i)
        fib[i] = fib[i - 1] + fib[i - 2];
    vector<string> result(51);
    for (int i = 1; i <= 50; ++i)
        result[i] = isPrime(fib[i]) ? "prime" : "not prime";
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        cout << result[N] << '\n';
    }
    return 0;
}
