#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int miskaScroe = 0, chrisScore = 0;

    while (t--)
    {
        int miska, chris;
        cin >> miska >> chris;

        if (miska > chris)
        {
            miskaScroe++;
        }
        else if (chris > miska)
        {
            chrisScore++;
        }
    }

    if (miskaScroe > chrisScore)
    {
        cout << "Mishka\n";
    }
    else if (chrisScore > miskaScroe)
    {
        cout << "Chris\n";
    }
    else
    {
        cout << "Friendship is magic!^^\n";
    }

    return 0;
}