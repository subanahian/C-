#include <iostream>
using namespace std;
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b; 
        a = temp; 
    }
    return a; 
}
int findLCM(int a, int b, int gcd) {
    return (a / gcd) * b; 
}
int main() {
    int A, B;
    cin >> A >> B;
    int gcd = findGCD(A, B);      
    int lcm = findLCM(A, B, gcd);  
    cout << gcd << " " << lcm << endl; 
    return 0;
}
