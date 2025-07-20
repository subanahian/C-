#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> grades(n);
    for (int i = 0; i < n; ++i) {
        cin >> grades[i];
    }
    vector<bool> successful(n, false); 
    for (int j = 0; j < m; ++j) {
        char maxGrade = '0';
        for (int i = 0; i < n; ++i) {
            if (grades[i][j] > maxGrade) {
                maxGrade = grades[i][j];
            }
        }
        for (int i = 0; i < n; ++i) {
            if (grades[i][j] == maxGrade) {
                successful[i] = true;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (successful[i]) {
            ++count;
        }
    }
    cout << count << "\n";
    return 0;
}
