#include <bits/stdc++.h>
using namespace std;

long long sumArray(long long arr[], int index) {
    if (index == 0) {
        return arr[0];
    } else {
        return arr[index] + sumArray(arr, index - 1);
    }
}
int main() {
    int N;
    cin >> N; 
    long long arr[1000];  
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    long long result = sumArray(arr, N - 1);
    cout << result << "\n";
    return 0;
}
