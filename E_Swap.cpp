#include <iostream>
using namespace std;
void swapAndPrint(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b <<"\n";
}
int main() {
    int X, Y;
    cin >> X >> Y;
    swapAndPrint(X, Y);
    return 0;
}
