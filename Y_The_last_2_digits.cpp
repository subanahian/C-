#include <iostream>
using namespace std;
int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    printf("%02d\n", ((A % 100) * (B % 100) * (C % 100) * (D % 100)) % 100);
    return 0;
}
