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
ll arr[100005];
int main() { 
    call;
    int T;
    cin >> T;
    int st = 1, en = T;
    for(int i = 1 ; i <= T ; i++) {
        cin >> arr[i];
    }
    sort(arr+1, arr+T+1);
    int res_st = st, res_en = en;
    ll res = LONG_LONG_MAX;
        while(st < en){
        ll sum = arr[st] + arr[en];
        if(sum == 0) break;
        else if(sum > 0) en--;
        else st++;
        
        if(st == en) break;
        res = min(llabs(res), llabs(sum));

        if(llabs(res) > llabs(arr[st] + arr[en])){
            res_st = st; res_en = en;
        }
        
        }
        

    
    cout << arr[res_st] << ' ' << arr[res_en];

}