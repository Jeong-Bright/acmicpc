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
    ll a, b, x, y;

    cin >> a >> b;
    cin >> x >> y;
    ll Q = lcm(b,y) / b;
    ll M = lcm(b,y) / y;
    
    ll T = lcm(b,y);
    ll t = Q*a + M*x;
    ll temp = gcd(t,T);
    
    if(t == T) cout << t / T << ' ' << T/T;
    else if(t % temp == 0 && T % temp == 0){
        cout << t / temp << ' ' << T / temp;
    }
    else
    cout << Q*a + M*x << ' ' << T;



     
} 