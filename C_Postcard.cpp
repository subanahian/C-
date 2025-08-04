#include <bits/stdc++.h>
 
using namespace std;
 
int main(void)
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    // seive[index] = false means it's prime and uncomment the function body and call
    // seiveGenerate();
 
    string str;
    int k;
    cin >> str >> k;
 
    int totalLeters = 0, candy = 0, snow = 0;
 
    for (auto it : str)
    {
        if (it >= 'a' && it <= 'z')
        {
            totalLeters++;
        }
        else if (it == '?')
        {
            candy++;
        }
        else
        {
            snow++;
        }
    }
 
    if (totalLeters >= k)
    {
        int shouldRemove = totalLeters - k;
        for (int i = 0; i < str.size() && shouldRemove; i++)
        {
            if (str[i] == '?' || str[i] == '*')
            {
                str[i - 1] = '0';
                shouldRemove--;
            }
        }
        if (shouldRemove)
        {
            cout << "Impossible\n";
        }
        else
        {
            string ans = "";
 
            for (auto it : str)
            {
                if (it >= 'a' && it <= 'z')
                {
                    ans.push_back(it);
                }
            }
            cout << ans << "\n";
        }
    }
    else
    {
        bool possible = false;
 
        for (auto it : str)
        {
            if (it == '*')
            {
                possible = true;
                break;
            }
        }
 
        if (possible)
        {
            string ans = "";
 
            int totalLRrequired = k - totalLeters;
 
            // cout << totalLRrequired << "\n";
            // cout << totalLeters << "\n";
 
            for (int i = 0; i < str.size(); i++)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                    ans.push_back(str[i]);
                }
                else if (str[i] == '*' && (totalLRrequired > 0))
                {
                    while (totalLRrequired--)
                    {
                        ans.push_back(str[i - 1]);
                    }
                }
            }
 
            cout << ans << "\n";
        }
        else
        {
            cout << "Impossible\n";
        }
    }
 
    return 0;
}