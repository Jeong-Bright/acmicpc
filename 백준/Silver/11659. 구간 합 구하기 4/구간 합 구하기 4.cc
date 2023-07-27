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
int arr[100005];
int DP[100005];
int main() { 
    call;
    cin >> T >> X;
    for ( int i = 1 ; i <= T ; i++){
        cin >> arr[i];
        DP[i] = DP[i-1] + arr[i];
    } 
    
    for(int i = 0 ; i < X; i++){
        int x,y;
        cin >> x >> y;
        
        if(x==y){cout << arr[x] << endl; continue;}

        cout << DP[y] - DP[x-1] << endl;
    }

}