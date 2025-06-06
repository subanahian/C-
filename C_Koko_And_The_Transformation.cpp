#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    long long sumA = 0, sumB = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sumA += a[i];
    }

    map<int, int> need;
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
        sumB += b[i];
        need[b[i]]++;
    }

    if (sumA != sumB) {
        cout << "No\n";
        return 0;
    }

    priority_queue<int> pq;
    for (int i = 0; i < n; ++i)
        if (a[i] > 0) pq.push(a[i]);

    while (!pq.empty()) {
        int x = pq.top();
        pq.pop();

        if (need[x]) {
            need[x]--;
            if (need[x] == 0)
                need.erase(x);
        } else {
            if (x == 1) {
                cout << "No\n";
                return 0;
            }
            pq.push(x / 2);
            pq.push(x - x / 2);
        }
    }

    cout << (need.empty() ? "Yes\n" : "No\n");
    return 0;
}

