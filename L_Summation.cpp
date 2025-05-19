#include <iostream>
using namespace std;

int sumArray(int arr[], int index) {
    if (index == 0) {
        return arr[0];
    } else {
        return arr[index] + sumArray(arr, index - 1);
    }
}

int main() {
    int N;
    cin >> N; 

    int arr[1000]; 
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int result = sumArray(arr, N - 1);
    cout << result << endl;
    return 0;
}
