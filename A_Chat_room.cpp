#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    cin >> str;

    string h = "hello";

    int index = 0;

    bool possible = false;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == h[index])
        {
            index++;
            if (index == 5)
            {
                possible = true;
            }
        }
    }

    cout << (possible ? "YES\n" : "NO\n");

    return 0;
}
