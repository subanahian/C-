#include<iostream>

using namespace std;
int main() {
  int n, p;
  cin >> n >> p;
  while (p--) {
    if (n % 10 == 0) {

      n = n / 10;
    } else {
      n = n - 1;
    }
    
  }

cout << n << "\n";
  return 0;
}
