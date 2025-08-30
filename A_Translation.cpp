#include <bits/stdc++.h>
using namespace std;

int main()
{    string str, temp, target;
    cin >> str >> target;

    temp = str;

    for (int i = 0, j = str.size() - 1; i < str.size(); i++, j--)
    {
        temp[i] = str[j];
    }

    if (temp == target)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
