#include <iostream>
using namespace std;

const int MAX = 20;
int weight[MAX];
int value[MAX];

int knapsack(int i, int w, int n) {
    if (i == n || w == 0) {
        return 0;
    }
    if (weight[i] > w) {
        return knapsack(i + 1, w, n);
    }
    int take = value[i] + knapsack(i + 1, w - weight[i], n);
    int skip = knapsack(i + 1, w, n);
    return max(take, skip);
}

int main() {
    int n, W;
    cin >> n >> W;
    for (int i = 0; i < n; i++) {
        cin >> weight[i] >> value[i];
    }
    int result = knapsack(0, W, n);
    cout << result << endl;
    return 0;
}
