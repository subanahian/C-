#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int positions[3] = {x1, x2, x3};
    sort(positions, positions + 3);
    int meetingPoint = positions[1];
    int totalDistance = abs(x1 - meetingPoint) + abs(x2 - meetingPoint) + abs(x3 - meetingPoint);
    cout << totalDistance << endl;

    return 0;
}
