#include <bits/stdc++.h>
int main() {
    std::string A, B;
    std::cin >> A >> B;
    std::cout << A.size() << " " << B.size() << std::endl;
    std::cout << A + B << std::endl;
    if (!A.empty() && !B.empty()) {
        std::swap(A[0], B[0]);
        std::cout << A << " " << B << std::endl;
    } else {
        std::cout << A << " " << B << std::endl;
    }
    return 0;
}
