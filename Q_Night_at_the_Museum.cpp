#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string s;
    cin >> s;

    char current = 'a';
    int totalRotations = 0;

    for (char c : s) {
        int distance = abs(c - current);
        int rotation = min(distance, 26 - distance); 
        totalRotations += rotation;
        current = c;
    }

    cout << totalRotations << "\n";
    return 0;
}
