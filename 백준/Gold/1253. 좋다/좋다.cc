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
ll arr[2005];
int main() { 
    call;
    int T; cin >> T;
    if(T <= 2) { cout << 0; return 0; }
    for(int i = 0 ; i < T ; i++){
        cin >> arr[i];
    }
    sort(arr, arr+T);
    ll st = 0, en = 0, res =0, stk = 0;

    for(int i = 0 ; i < T; i++){
        st = 0;
        en = T-1;
        while(st != en){
            if(st == i) st++;
            else if(en == i) en--;
            else{
            ll sum = arr[st] + arr[en];
            if(sum == arr[i]) {
                res++;
                break;
            }
            else if(sum > arr[i]) en--;
            else st++;
            }

        }
        
    }
    cout << res;
}