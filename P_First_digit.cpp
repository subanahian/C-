#include <iostream>
using namespace std;
int main() {
    string X;
    cin >> X;  
    if ((X / 1000)  % 2 == 0) {
        cout << "EVEN" << "\n";
    } else {
        cout << "ODD" << "\n";
    }
    return 0;
}
