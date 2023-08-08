#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define maxs 10000005

// ll gcd(int a, int b) {
//     if(a == 0) return b;
//     return gcd(b%a, a); 
// }

// ll lcm(int a, int b){
//     return a / gcd(a,b) * b;
// }

int T,X,sum;
ll mx = 0;
vector<pair<int,int>> vp;
int DP[105];

int main() { 
    call;
    cin >> T;
    for(int i = 0 ; i < T; i++){
        int x,y;
        cin >> x >> y;
        vp.push_back({x,y});
        DP[i] = 1;
    }
    sort(vp.begin(), vp.end());

    for(int i = 0 ; i < vp.size(); i++){
        for(int j = 0; j < i; j++){
            if(vp[i].second > vp[j].second){
                DP[i] = max(DP[i], DP[j]+1);    
            }
       }
       sum = max(sum, DP[i]);
    }
    cout << T-sum;
}