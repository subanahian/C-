#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int count = 0;
    int max_num = 0;
    int answer = 0;
    for(int i=0; i<n; i++) {
        max_num = max(max_num, arr[i]);
        count++;
        if (max_num == count) {
            answer++;
        }
    }
    cout << answer << "\n";
    return 0;
}
