#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define maxs 10000005

ll gcd(int a, int b) {
    if(a == 0) return b;
    return gcd(b%a, a); 
}

ll lcm(int a, int b){
    return a / gcd(a,b) * b;
}

int main() {

    call;
    int a, b;

    cin >> a >> b;
    cout << lcm(a,b);

} 