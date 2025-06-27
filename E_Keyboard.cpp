#include <iostream>
#include <string>
using namespace std;

int main() {
    char dir;
    string typed;
    cin >> dir >> typed;
    string row1 = "qwertyuiop";
    string row2 = "asdfghjkl;";
    string row3 = "zxcvbnm,./";
    string keyboard = row1 + row2 + row3;
    string result = "";
    for (char c : typed) {
        size_t pos = keyboard.find(c);
        if (dir == 'R') {
            result += keyboard[pos - 1]; 
        } else {
            result += keyboard[pos + 1];  
        }
    }
    cout << result << endl;
    return 0;
}
