#include <iostream>
using namespace std;
bool tryAllWays(int A[], int N, int index, int sum, int X) {
    if (index == N) {
        return sum == X;
    }
    bool add = tryAllWays(A, N, index + 1, sum + A[index], X);
    bool subtract = tryAllWays(A, N, index + 1, sum - A[index], X);
    return add || subtract;
}

int main() {
    int N, X;
    cin >> N >> X;
    int A[20]; 
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    bool result = tryAllWays(A, N, 1, A[0], X);

    if (result) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
