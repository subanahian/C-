#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;

    int maxVal;
    int minVal;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        if (i == 0)
        {
            maxVal = temp;
            minVal = temp;
            continue;
        }

        if (temp > maxVal)
        {
            maxVal = temp;
            ans++;
        }
        else if (temp < minVal)
        {
            minVal = temp;
            ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}