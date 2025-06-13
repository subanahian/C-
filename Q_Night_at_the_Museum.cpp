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
        int rotation = min(distance, 26 - distance); // choose the shorter path around the circle
        totalRotations += rotation;
        current = c;
    }

    cout << totalRotations << endl;
    return 0;
}
