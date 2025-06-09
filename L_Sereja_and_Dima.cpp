#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> cards(n);
    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
    }
    int left = 0, right = n - 1;
    int sereja = 0, dima = 0;
    bool turn = true; 
    while (left <= right) {
        int chosen;
        if (cards[left] > cards[right]) {
            chosen = cards[left++];
        } else {
            chosen = cards[right--];
        }
        if (turn) {
            sereja += chosen;
        } else {
            dima += chosen;
        }
        turn = !turn; 
    }
    cout << sereja << " " << dima << "\n";
    return 0;
}
