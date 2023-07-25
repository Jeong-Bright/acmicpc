#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
using namespace std;
typedef long long ll;
int T;
int b;
vector<pair<int, int>> v;
int main() {

    call;
    T = 20;
    double a, c, G = 0, sum = 0;
    while (T--) {
        string s,t;
        cin >> s >> a >> t;
        if (t == "A+")
            c = 4.5;
        else if (t == "A0")
            c = 4.0;
        else if (t == "B+")
            c = 3.5;
        else if (t == "B0")
            c = 3.0;
        else if (t == "C+")
            c = 2.5;
        else if (t == "C0")
            c = 2.0;
        else if (t == "D+")
            c = 1.5;
        else if (t == "D0")
            c = 1.0;
        else if (t == "F")
            c = 0;
        else if (t == "P") {
            c = 0;
            a = 0;
        }
        sum += a * c;
        G += a;
    }
    sum = sum / G;
    std::cout.precision(7);
    std::cout << sum;
}