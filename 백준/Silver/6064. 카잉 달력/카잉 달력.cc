#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
vector<int> v;
vector<int> v1;
int gcd(int a, int b){
    if(a == 0 ) return b;
    return gcd(b%a, a);
}

int lcm(int a, int b){
    return a / gcd(a,b) * b;
}

int cal(int a, int b, int x, int y){
    if(a == x) x = 0;
    if(b == y) y = 0;
    int k = lcm(a,b);
    for(int i = x ; i <= k; i+=a ){
        if(i == 0) continue;
        if(i%b == y){
            return i;
        }
    }
    return -1;
}

int main() {
    call;
    int T;
    cin >> T;

    while(T--){
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    cout << cal(a,b,x,y) << endl;
    }


    
}