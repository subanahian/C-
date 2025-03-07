#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxEle=0;
    for (int i=0;i<n;i++)
    {
        if (arr[i]>maxEle)
        {
            maxEle=arr[i];
        }
    }
    int ans=0;
    for (int i=0;i<n;i++)
    {
        ans=ans+(maxEle-arr[i]);
    }
    cout<<ans<<"\n";
}