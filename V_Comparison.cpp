#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B;
    char S;
    cin >> A >> S >> B;
    if (S == '<' && A < B)
    {
        cout << "Right" << "\n";
    }
    else if (S == '>' && A > B)
    {
        cout << "Right" << "\n";
    }
    else if (S == '=' && A == B)
    {
        cout << "Right" << "\n";
    }
    else
    {
        cout << "Wrong" << "\n";
    }
}