#include <iostream>
using namespace std;

int countWays(int current, int end) {
    if (current == end)
        return 1;
    if (current > end)
        return 0;

    return countWays(current + 1, end) +
           countWays(current + 2, end) +
           countWays(current + 3, end);
}
int main() {
    int S, E;
    cin >> S >> E;
    cout << countWays(S, E) << endl;
    return 0;
}
