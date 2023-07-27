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

int T,X=1,mn,g,e;
ll mx = 0;
int arr[100005];
//int arr2[1000005];
int main() { 
    call;
    cin >> T;

    for(int i = 1 ; i <= T ; i++){
        cin>>arr[i];
    }

    sort(arr+1, arr+T+1, greater<int>());

    for(int i = 1; i <= T; i++){
        ll sum = arr[i] * i;
        mx = max(mx, sum);
    }
    cout << mx;
}