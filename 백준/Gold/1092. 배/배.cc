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

int T,X,sum;
ll mx = 0;
int arr[55];
int arr2[55];
vector<int> v2;

int main() { 
    call;
    cin >> T;
    for(int i = 1; i <= T; i++) cin >> arr[i];
    sort(arr+1, arr+T+1, greater<int>());
    cin >> X;
    for(int i = 1; i <= X; i++) {int x; cin >> x; v2.push_back(x);}
    sort(v2.begin(), v2.end());

    if(arr[1] < v2[v2.size()-1]) {cout << -1; return 0;}

    else {
        while(!v2.empty()){
            int q = 1;
            int t = v2.size() - 1;

            for(int i = t; i >= 0; i--){
                if(q==T+1) break;
                if(arr[q]-v2[i] >= 0){
                    v2.erase(v2.begin() + i);
                    q++;
                }
                else continue;
            }
            sum++;
        }
    }
    cout << sum;
}