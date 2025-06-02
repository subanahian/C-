#include <iostream>
#include <vector>
using namespace std;

void printMaxSoFar(const vector<int>& A, int i, int maxSoFar) {
    if (i >= A.size()) return; 
    maxSoFar = max(maxSoFar, A[i]);
    cout << maxSoFar << " ";
    printMaxSoFar(A, i + 1, maxSoFar); 
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
        cin >> A[i];
    printMaxSoFar(A, 0, A[0]);

    return 0;
}
