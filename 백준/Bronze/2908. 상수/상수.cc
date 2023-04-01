#include <iostream>

using namespace std;

int rev(int x) {
    int rn = 0;
    while (x) {
        rn = rn * 10 + x % 10;
        x /= 10;
    }
    return rn;
}

int main() {
    int a, b;
    cin >> a >> b;
    if (rev(a) > rev(b)) cout << rev(a);
    else cout << rev(b);
}