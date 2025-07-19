#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    if (A.length() != B.length()) {
        cout << "NO" << endl;
        return 0;
    }
    if (A == B) {
        cout << "NO" << endl;
        return 0;
    }
    int diffCount = 0;
    int idx1 = -1, idx2 = -1;
    for (int i = 0; i < A.length(); ++i) {
        if (A[i] != B[i]) {
            diffCount++;
            if (idx1 == -1) idx1 = i;
            else if (idx2 == -1) idx2 = i;
            else {
                cout << "NO" << "\n";
                return 0;
            }
        }
    }
    if (diffCount == 2 && A[idx1] == B[idx2] && A[idx2] == B[idx1]) {
        cout << "YES" << "\n"
        ;
    } else {
        cout << "NO" << "\n";
    }
    return 0;
}
