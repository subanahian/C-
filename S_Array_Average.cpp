#include <iostream>
#include <iomanip> // for controlling decimal places
using namespace std;

// Recursive function to find sum of array
int findSum(int arr[], int n) {
    if (n == 1) {
        return arr[0]; // base case: only one element
    }
    return arr[n - 1] + findSum(arr, n - 1); // last element + sum of rest
}

int main() {
    int n;
    cin >> n; // read how many numbers

    int arr[100]; // array size up to 100

    // read array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // get total sum using recursion
    int total = findSum(arr, n);

    // calculate average
    double avg = (double)total / n;

    // print average with 6 decimal places
    cout << fixed << setprecision(6) << avg << endl;

    return 0;
}
