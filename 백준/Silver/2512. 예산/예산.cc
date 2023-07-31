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

int T,X,sum,mid;
ll mx = 0;
vector<int> v2;

int main() { 
    call;
    cin >> T;
    for(int i = 0 ; i < T; i++){
        cin >> X;
        v2.push_back(X);
    }
    sort(v2.begin(), v2.end());
    cin >> mx;
    int st = 0, en = v2[v2.size()-1];
    
    while(st <= en) {
        sum = 0;
        mid = (st+en)/2;

        for(int i = 0 ; i < v2.size(); i++){
            if(mid < v2[i]){
                sum += mid;
            }
            else sum += v2[i];
        }
        if(sum <= mx){
            st = mid+1;
        }
        else if(sum > mx) {
            en = mid-1;
        }

    }
    cout << en;
}