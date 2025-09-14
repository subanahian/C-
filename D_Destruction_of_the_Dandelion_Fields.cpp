#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        vector<long long int> evenVec, oddVec;
        evenVec.clear();
        oddVec.clear();

        long long int ans = 0;

        for (long long int i = 0; i < n; i++)
        {
            long long int num;
            cin >> num;

            if (num % 2 == 0)
            {
                evenVec.push_back(num);
            }
            else
            {
                oddVec.push_back(num);
            }
        }

        if (oddVec.size() == 0)
        {
            ans = 0;
        }
        else
        {
            for (int i = 0; i < evenVec.size(); i++)
            {
                ans += evenVec[i];
            }

            sort(oddVec.rbegin(), oddVec.rend());

            bool take = false;

            for (int i = 0; i < oddVec.size(); i++)
            {
                take = !take;
                if (take)
                {
                    ans += oddVec[i];
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}