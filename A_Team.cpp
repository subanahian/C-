#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int count = 0;
    cin >> n;
    while( n--){
        int num1 , num2 , num3;
        cin >> num1 >> num2 >> num3;
        if(num1 + num2 +num3 >= 2){
            count++;
        }
    }
 cout << count << "\n";
 return 0;
}