#include <bits/stdc++.h> 
using namespace std;

void printSpaces(int count) {
    if (count == 0) return;
    cout << " ";
    printSpaces(count - 1);
}
void printStars(int count) {
    if (count == 0) return;
    cout << "*";
    printStars(count - 1);
}
void printPyramid(int current, int N) {
    if (current > N) return;
    printSpaces(N - current);
    printStars(2 * current - 1);
    cout << endl;
    printPyramid(current + 1, N);
}
int main() {
    int N;
    cin >> N;
    printPyramid(1, N);
    return 0;
}
