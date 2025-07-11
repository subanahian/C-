#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}
long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    long long a1, b1, a2, b2;
    sscanf(s1.c_str(), "%lld/%lld", &a1, &b1);
    sscanf(s2.c_str(), "%lld/%lld", &a2, &b2);
    long long num = lcm(a1, a2);
    long long den = gcd(b1, b2);
    long long g = gcd(num, den);
    num /= g;
    den /= g;
    cout << num << "/" << den << endl;
    return 0;
}
