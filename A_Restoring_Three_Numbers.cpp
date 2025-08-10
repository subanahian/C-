#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> vec;
    for (int i = 0; i < 4; i++)
    {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    sort(vec.begin(), vec.end());

    cout << vec.back() - vec[2] << " " << vec.back() - vec[1] << " " << vec.back() - vec[0] << "\n";

    return 0;
}


