#include <bits/stdc++.h>
int main() {
    std::string s;
    std::getline(std::cin, s);
    for (char c : s) {
        if (c == '\\') break;
        std::cout << c;
    }
    return 0;
}
