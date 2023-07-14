#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define maxs 10000005
int dp[100005];
int arr[100005];
int T;
ll gcd(int a, int b) {
    if(a == 0) return b;
    return gcd(b%a, a); 
}

ll lcm(int a, int b){
    return a / gcd(a,b) * b;
}

int main() {

    call;
    cin >> T;
    int sum = INT_MIN;
    
    for(int i = 1 ; i <= T; i++) {
        cin >> dp[i];
    }
    

    for(int i = 1; i <= T; i++){
        arr[i] = max(dp[i], arr[i-1] + dp[i]);
        sum = max(sum, arr[i]);
    }

    cout << sum;



     
} 