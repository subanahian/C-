#include <iostream>
using namespace std;
int main() {
    int n, opinion;
    cin >> n;
    int isHard = 0;
    for (int i=0; i<n; i++) {
        cin>>opinion;
     if (opinion==1) {
    isHard = 1;  
        }
    }
if (isHard) {
  cout<<"Hard\n";
    } else {
        cout<<"Easy\n";
    }
    return 0;
}
