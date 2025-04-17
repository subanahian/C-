#include <iostream>
using namespace std;

int main() {
    int RA, CA;
    cin >> RA >> CA;  
    int A[100][100];  
    for (int i = 0; i < RA; i++) {
        for (int j = 0; j < CA; j++) {
            cin >> A[i][j];
        }
    }

    int RB, CB;
    cin >> RB >> CB;
    int B[100][100];  
    for (int i = 0; i < RB; i++) {
        for (int j = 0; j < CB; j++) {
            cin >> B[i][j];
        }
    }
    int result[100][100];
    for (int i = 0; i < RA; i++) {
        for (int j = 0; j < CB; j++) {
            result[i][j] = 0; 
            for (int k = 0; k < CA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (int i = 0; i < RA; i++) {
        for (int j = 0; j < CB; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
