#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int t = 1; t <= T; ++t) {
        int N;
        cin >> N;
        
        int x1, y1, x2, y2;
        int max_x1 = -100000, max_y1 = -100000;
        int min_x2 = 100000, min_y2 = 100000;
        
        for (int i = 0; i < N; ++i) {
            cin >> x1 >> y1 >> x2 >> y2;
            max_x1 = max(max_x1, x1);
            max_y1 = max(max_y1, y1);
            min_x2 = min(min_x2, x2);
            min_y2 = min(min_y2, y2);
        }
        
        int width = max(0, min_x2 - max_x1);
        int height = max(0, min_y2 - max_y1);
        int area = width * height;
        
        cout << "Case #" << t << ": " << area << endl;
    }

    return 0;
}
