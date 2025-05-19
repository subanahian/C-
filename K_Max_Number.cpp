#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    int maxInRest = findMax(arr, n - 1);
    if (arr[n - 1] > maxInRest) {
        return arr[n - 1];
    } else {
        return maxInRest;
    }
}

int main() {
    int N;
    cin >> N; 
    int arr[1000]; 

    for (int i = 0; i < N; i++) {
        cin >> arr[i]; 
    }

    int maxValue = findMax(arr, N);  
    cout << maxValue << endl;  

    return 0;
}
