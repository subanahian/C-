#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> snacks(n);
    for (int i = 0; i < n; i++) {
        cin >> snacks[i];
    }
    int current = n; 
    unordered_set<int> waiting; 
    for (int i = 0; i < n; i++) {
        waiting.insert(snacks[i]); 
        if (waiting.count(current)) {
            while (waiting.count(current)) {
                cout << current << " ";
                waiting.erase(current);
                current--;
            }
        }
        cout << "\n"; 
    }
    return 0;
}
