#include <iostream>
#include <string>
using namespace std;

int main() {
    string scale, extraWeights;
    cin >> scale >> extraWeights;
    int barPosition = scale.find('|');
    string left = scale.substr(0, barPosition);
    string right = scale.substr(barPosition + 1);
    int total = left.length() + right.length() + extraWeights.length();
    if (total % 2 != 0) {
        cout << "Impossible" << endl;
        return 0;
    }
    int target = total / 2;
    for (int i = 0; i < extraWeights.length(); i++) {
        if (left.length() < target) {
            left += extraWeights[i]; 
        } else {
            right += extraWeights[i]; 
        }
    }
    if (left.length() == right.length()) {
        cout << left << "|" << right << endl;
    } else {
        cout << "Impossible" << endl;
    }
    return 0;
}
