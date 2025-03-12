#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin>>N;
    int years = N/365;
    N = N%365;
    int months = N/30;
    N = N%30;
    int days = N;
    cout << years << " years" << "\n" ;
    cout << months << " months" << "\n" ;
    cout << days << " days" << "\n";

return 0;  
}
