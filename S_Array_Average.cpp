#include <bits/stdc++.h>
using namespace std;

int findSum(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    return arr[n - 1] + findSum(arr, n - 1);
}
int main() {
    int n;
    cin >> n; 
    int arr[100]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int total = findSum(arr, n);
    double avg = (double)total / n;
    cout << fixed << setprecision(6) << avg << "\n";
    return 0;
}
