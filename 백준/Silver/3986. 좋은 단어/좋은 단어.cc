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

int v;
int T,X,sum,mid;
ll mx = 0;
int arr[105][105];
bool vis[105];


int main() { 
    call;
    cin >> T;
    while(T--){
    stack<char> s;
    string S; cin >> S;
    X = S.length();
    for(int i = 0 ; i < X; i++){
        if(s.empty()) s.push(S[i]);
        else{
            if(S[i] == 'A'){
                if(s.top() == 'A'){ s.pop();}
                else s.push(S[i]);
            }
            if(S[i] == 'B'){
                if(s.top() == 'B'){s.pop();}
                else s.push(S[i]);
            }
        }
    }
    if(s.empty()) sum++;

    }
    cout << sum;




}