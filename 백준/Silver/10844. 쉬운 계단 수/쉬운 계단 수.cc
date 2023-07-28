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
vector<int> v;
ll arr[105][10];
int main() { 
    call;
    cin >> T;

    for(int i = 1; i <= 9; i++) arr[1][i] = 1;

    for(int i = 2; i <= T; i++){
        for(int q = 0; q <= 9; q++){
            if(q == 0) arr[i][0] = arr[i-1][1] % 1000000000;
            else if(q == 9) arr[i][9] = arr[i-1][8] % 1000000000;
            
            else arr[i][q] = (arr[i-1][q-1] + arr[i-1][q+1]) % 1000000000;
    }
}


for (int i = 0; i <= 9; i++){
    mx = (mx + arr[T][i])%1000000000 ;
    }

cout << mx%1000000000;

}