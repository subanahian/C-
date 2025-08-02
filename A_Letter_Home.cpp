#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;

        int mostLeftPoint = 1e8; 
        int mostRightPoint = -1e8;
        for (int i = 0; i < n; i++)
        {
            int point;
            cin >> point;
            mostLeftPoint = min(mostLeftPoint, point);
            mostRightPoint = max(mostRightPoint, point);
        }

        int leftStepsRequired = s - mostLeftPoint;
        int rightStepsRquired = mostRightPoint - s;

        if (leftStepsRequired < 0)
        {
            leftStepsRequired = 0;
        }
        if (rightStepsRquired < 0)
        {
            rightStepsRquired = 0;
        }
        if (leftStepsRequired >= rightStepsRquired)
        {
            cout << (rightStepsRquired * 2) + leftStepsRequired << "\n";
        }
        else
        {
            cout << (leftStepsRequired * 2) + rightStepsRquired << "\n";
        }
    }
    return 0;
}