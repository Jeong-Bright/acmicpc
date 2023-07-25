#include <iostream>


int main() {
    int T = 9, sum = 0, r;
    for (int i = 1; i <= T; i++) {
        int x; std::cin >> x;
        if (x > sum) {
            sum = x; r = i;
        }
    }
    std::cout << sum << std::endl;
    std::cout << r;
    return 0;
}