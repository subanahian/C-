#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B; 

    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    int total = 0;
    int even = 0;
    int odd = 0;

    for (int i = A; i <= B; i++) {
        total = total + i;
        if (i % 2 == 0) {
            even = even + i;
        } else {
            odd = odd + i;    
        }
    }

    cout << total << "\n";
    cout << even << "\n";
    cout << odd << "\n";

    return 0;
}
