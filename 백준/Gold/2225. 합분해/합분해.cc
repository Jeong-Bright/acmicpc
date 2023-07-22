#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define maxs 10000005

// ll gcd(int a, int b) {
//     if(a == 0) return b;
//     return gcd(b%a, a); 
// }

// ll lcm(int a, int b){
//     return a / gcd(a,b) * b;
// }

ll cpa[205][205];
int main() { 
    call;
    int X;
    int T;
    cin >> X >> T;

    for(int i = 0 ; i <= 201; i++){
        cpa[1][i] = i;
    }

    for(int i = 2; i <= X; i++){
        for(int j = 1; j <= T; j++){
            cpa[i][j] = (cpa[i-1][j] + cpa[i][j-1]) % 1000000000;
        }
    }
    ll P = cpa[X][T];
    cout << P;

}