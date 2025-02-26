
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;

    int lowerCase = 0, upperCase = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            upperCase++;
        }
        else
        {
            lowerCase++;
        }
    }

    if (upperCase > lowerCase)
    {
        for (int i = 0; i < str.size(); i++)
        {
            str[i] = toupper(str[i]);
        }
    }
    else
    {
        for (int i = 0; i < str.size(); i++)
        {
            str[i] = tolower(str[i]);
        }
    }

    cout << str << "\n";
}
