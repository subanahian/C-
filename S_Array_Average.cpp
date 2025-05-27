#include <iostream>
#include <iomanip>
using namespace std;

double sumArray(int A[], int N, int index) {
    if (index >= N) {
        return 0;
    }
    return A[index] + sumArray(A, N, index + 1);
}

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    double sum = sumArray(A, N, 0);
    double average = sum / N;
    cout << fixed << setprecision(6) << average << "\n";
    return 0;
}