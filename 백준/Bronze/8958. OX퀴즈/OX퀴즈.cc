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
// }/
int main() { 
    call;
    int T; cin >> T;
    while(T--){
    string x;
    cin >> x;
    int y = x.length();
    int sum = 0;
    int q = 0;
    for(int i = 0 ; i < y ;i ++){
        if(x[i] == 'O'){
        q += 1;
        sum += q;
        }
        else if(x[i] == 'X'){
            q = 0;
        }

    }
    cout << sum << endl;
    }

}